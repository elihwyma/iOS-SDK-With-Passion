/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIImageView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface CKActionMenuItemImageView : UIImageView

{
    UIColor *_unhighlightedTintColor;
    UIColor *_highlightedTintColor;
    _Bool _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateTintColor;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3;

@end
