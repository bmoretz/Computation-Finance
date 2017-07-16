﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "XamlBindingInfo.g.h"

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class SplitView;
                ref class Button;
                ref class Frame;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                namespace Primitives {
                    ref class ToggleButton;
                }
            }
        }
    }
}
namespace RenderEngine {
    namespace Controls {
        ref class NavMenuListView;
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Shapes {
                ref class Rectangle;
            }
        }
    }
}

namespace RenderEngine
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class AppShell : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
        class AppShell_obj2_Bindings;
    
        ::XamlBindingInfo::XamlBindings^ Bindings;
        private: ::Windows::UI::Xaml::Controls::Grid^ LayoutRoot;
        private: ::Windows::UI::Xaml::Controls::Primitives::ToggleButton^ TogglePaneButton;
        private: ::Windows::UI::Xaml::Controls::SplitView^ RootSplitView;
        private: ::Windows::UI::Xaml::Controls::Grid^ PaneContentGrid;
        private: ::RenderEngine::Controls::NavMenuListView^ NavMenuList;
        private: ::Windows::UI::Xaml::Shapes::Rectangle^ NavPaneDivider;
        private: ::Windows::UI::Xaml::Controls::Button^ FeedbackNavPaneButton;
        private: ::Windows::UI::Xaml::Controls::Button^ SettingsNavPaneButton;
        private: ::Windows::UI::Xaml::Controls::Frame^ frame;
    };
}
