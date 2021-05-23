/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSArray;

@protocol CKDismissViewDelegate;

@interface CKDismissView : UIView

{
    id <CKDismissViewDelegate> _delegate;
    NSArray *_passthroughViews;
}

@property (weak, nonatomic) id <CKDismissViewDelegate> delegate;
@property (copy, nonatomic) NSArray *passthroughViews;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
