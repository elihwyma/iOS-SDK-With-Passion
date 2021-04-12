//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIFocusSystem, _UIFocusEventRecognizer, _UIFocusFastScrollingRequest, _UIFocusMovementRequest;

@protocol _UIFocusEventRecognizerDelegate <NSObject>
- (void)_focusEventRecognizer:(_UIFocusEventRecognizer *)arg1 didRecognizeFastScrollingRequest:(_UIFocusFastScrollingRequest *)arg2;
- (BOOL)_focusEventRecognizer:(_UIFocusEventRecognizer *)arg1 didRecognizeFocusMovementRequest:(_UIFocusMovementRequest *)arg2;
- (UIFocusSystem *)_focusMovementSystemForFocusEventRecognizer:(_UIFocusEventRecognizer *)arg1;
- (BOOL)_shouldRecognizeEventsInFocusEventRecognizer:(_UIFocusEventRecognizer *)arg1;
@end

