/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface AFFuture : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    id _value;
}

- (id)initAndGetSetterBlock:(CDUnknownBlockType *)arg1;
- (id)waitForValue:(unsigned long long)arg1;

@end
