/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSUUID;

@protocol OS_dispatch_queue;

@interface HDStaticSyncTask : NSObject

{
    HDProfile *_profile;
    unsigned long long _options;
    NSUUID *_storeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSUUID *storeIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3;

@end
