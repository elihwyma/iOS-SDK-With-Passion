/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/_UINavigationBarTitleView.h>

@interface CKNavigationBarTitleView : _UINavigationBarTitleView

{
    _Bool _editing;
}

@property (nonatomic, getter=isEditing) _Bool editing;

- (void)contentDidChange;
- (void)updateIfNeeded:(_Bool)arg1;
- (void)_setTrailingItemsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(_Bool)arg1;

@end
