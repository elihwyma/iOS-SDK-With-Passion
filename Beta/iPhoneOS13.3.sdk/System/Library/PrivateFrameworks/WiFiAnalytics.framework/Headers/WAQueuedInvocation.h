/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface WAQueuedInvocation : NSObject

{
    NSInvocation *_invocation;
    CDUnknownBlockType _reply;
}

@property (retain, nonatomic) NSInvocation *invocation;
@property (copy, nonatomic) CDUnknownBlockType reply;

@end
