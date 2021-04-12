//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIView;
@protocol ICHandwritingDebugDelegate;

@interface ICHandwritingDebugWindow : UIWindow
{
    BOOL _draggingWindow;
    BOOL _resizingWindow;
    UIView *_resizeTriangle;
    CGPoint _initialTouchLocation;
}

+ (void)savePreferredFrame:(CGRect)arg1;
+ (CGRect)preferredFrame;
@property(retain, nonatomic) UIView *resizeTriangle; // @synthesize resizeTriangle=_resizeTriangle;
@property(nonatomic) CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(nonatomic, getter=isResizingWindow) BOOL resizingWindow; // @synthesize resizingWindow=_resizingWindow;
@property(nonatomic, getter=isDraggingWindow) BOOL draggingWindow; // @synthesize draggingWindow=_draggingWindow;
// - (void).cxx_destruct;
- (void)refresh;
- (id)navigationController;
@property(nonatomic) __weak id <ICHandwritingDebugDelegate> handwritingDebugDelegate;
- (id)handwritingDebugViewController;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateResizeTriangleFrame;
- (void)layoutSubviews;
- (void)sharedInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

