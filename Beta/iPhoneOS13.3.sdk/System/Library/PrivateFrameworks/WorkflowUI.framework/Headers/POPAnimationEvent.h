/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface POPAnimationEvent : NSObject

{
    unsigned long long _type;
    double _time;
    NSString *_animationDescription;
}

@property (copy, nonatomic) NSString *animationDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double time;

- (id)description;
- (id)initWithType:(unsigned long long)arg1 time:(double)arg2;
- (void)_appendDescription:(id)arg1;

@end
