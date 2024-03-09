#include "Enums.h"

std::string enumToString(Category category) {
    switch (category) {
    case Category::Grocery: return "Grocery";
    case Category::Electronics: return "Electronics";
    case Category::Apparel: return "Apparel";
    case Category::Literature: return "Literature";
    case Category::Health: return "Health";
    case Category::Automotive: return "Automotive";
    case Category::Tools: return "Tools";
    default: return "Unknown";
    }
}

std::string enumToString(Currency currency) {
    switch (currency) {
    case Currency::USD: return "USD";
    case Currency::EUR: return "EUR";
    case Currency::UAH: return "UAH";
    default: return "Unknown";
    }
}

std::string enumToString(ReporterState state) {
    switch (state) {
    case ReporterState::Shipped: return "shipped from";
    case ReporterState::Added: return "added to";
    default: return "Unknown";
    }
}
