/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol OS_dispatch_queue;

@interface ATXMediaApplications : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_mediaApps;
}

- (id)init;
- (void)_updateMediaApps;
- (_Bool)appSupportsMedia:(id)arg1;

@end
