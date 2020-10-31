#pragma once

#include <fmt/format.h>
#include "ALabel.hpp"
#include "bar.hpp"
#include "client.hpp"

namespace waybar::modules {

class IdleInhibitor : public ALabel {
 public:
  IdleInhibitor(const std::string&, const waybar::Bar&, const Json::Value&);
  ~IdleInhibitor();
  auto update() -> void;

 private:
  bool handleToggle(GdkEventButton* const& e);

  const Bar&                    bar_;
  std::string                   status_;
  int                           pid_;
};

}  // namespace waybar::modules
