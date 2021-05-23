/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIControlTargetAction : NSObject

{
    id _target;
    SEL _action;
    unsigned long long _eventMask;
    _Bool _cancelled;
}

@property (nonatomic) _Bool cancelled;

@end
