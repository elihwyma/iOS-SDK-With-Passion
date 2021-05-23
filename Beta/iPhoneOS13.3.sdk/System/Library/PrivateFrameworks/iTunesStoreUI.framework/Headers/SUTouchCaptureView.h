/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIControl.h>

@class NSArray;

@interface SUTouchCaptureView : UIControl

{
    NSArray *_passThroughViews;
}

@property (retain, nonatomic) NSArray *passThroughViews;

- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
