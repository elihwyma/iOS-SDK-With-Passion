/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol OS_dispatch_queue;

@interface PPAppLaunchMonitorRegistrationContext : NSObject

{
    NSNumber *_token;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
}

@property (nonatomic, readonly) NSNumber *token;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CDUnknownBlockType handler;

- (id)initWithToken:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
