/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _TVSearchBarWrapper : UIView

{
    UISearchBar *_searchBar;
    _Bool _enabled;
}

@property (retain, nonatomic) UISearchBar *searchBar;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (_Bool)canBecomeFocused;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
