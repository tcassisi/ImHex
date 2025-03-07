#pragma once

#include <hex/ui/view.hpp>

#include <cstdio>
#include <string>

namespace hex::plugin::builtin {

    class ViewSettings : public View {
    public:
        explicit ViewSettings();
        ~ViewSettings() override;

        void drawContent() override;

        [[nodiscard]] bool isAvailable() const override { return true; }
        [[nodiscard]] bool hasViewMenuItemEntry() const override { return false; }

        [[nodiscard]] ImVec2 getMinSize() const override { return { 700, 400 }; }
        [[nodiscard]] ImVec2 getMaxSize() const override { return { 700, 400 }; }

    private:
        bool m_restartRequested = false;
    };

}