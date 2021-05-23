/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol OS_dispatch_queue, OS_dispatch_source, _DKKnowledgeQuerying;

@interface ATXDuetKnowledgeStoreManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <_DKKnowledgeQuerying> _store;
    NSDate *_lastUsedDate;
    NSObject<OS_dispatch_source> *_pressureSource;
    unsigned long long _previousPressure;
    NSObject<OS_dispatch_source> *_expirationSource;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)_clear;
- (void)_handleMemoryPressure;

@end
