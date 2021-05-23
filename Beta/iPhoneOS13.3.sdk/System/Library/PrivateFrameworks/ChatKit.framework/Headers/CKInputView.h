/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIInputView.h>

@interface CKInputView : UIInputView

{
    long long _lastContentSizeInterfaceOrientation;
    struct CGSize _lastContentSize;
}

@property (nonatomic) struct CGSize lastContentSize;
@property (nonatomic) long long lastContentSizeInterfaceOrientation;

+ (struct CGSize)defaultContentSize;
+ (struct CGSize)defaultContentSizeLargerThanKeyboard:(_Bool *)arg1;

- (struct CGSize)intrinsicContentSize;

@end
