/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIState, NSString;

@interface FIUITransition : NSObject

{
    NSString *_label;
    FIUIState *_toState;
    long long _event;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _gate;
}

@property (retain, nonatomic) NSString *label;
@property (weak, nonatomic) FIUIState *toState;
@property (nonatomic) long long event;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) CDUnknownBlockType gate;

@end
