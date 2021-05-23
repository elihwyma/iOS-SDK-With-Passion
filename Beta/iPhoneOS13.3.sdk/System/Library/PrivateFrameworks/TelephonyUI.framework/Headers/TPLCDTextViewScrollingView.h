/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class TPLCDTextView;

__attribute__((visibility("hidden")))
@interface TPLCDTextViewScrollingView : UIView

{
    TPLCDTextView *_owner;
}

- (void)setOwner:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 owner:(id)arg2;

@end
