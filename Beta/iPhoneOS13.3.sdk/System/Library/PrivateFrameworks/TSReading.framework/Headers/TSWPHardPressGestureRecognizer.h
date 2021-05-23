/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/_UINonEditableTextSelectionForceGesture.h>

@class TSWPRep;

@interface TSWPHardPressGestureRecognizer : _UINonEditableTextSelectionForceGesture

{
    TSWPRep *_targetRep;
    unsigned long long _previousPressCount;
}

@property (retain, nonatomic) TSWPRep *targetRep;
@property (nonatomic) unsigned long long previousPressCount;
@property (nonatomic, readonly) unsigned long long currentPressCount;

- (void)dealloc;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;

@end
