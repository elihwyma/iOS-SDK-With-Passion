/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKSource, NSMutableArray, NSMutableSet, NSSet, NSString, NSUUID;

@protocol OS_dispatch_source;

@interface _HDAuthorizationRequestGroup : NSObject

{
    NSMutableSet *_typesToWrite;
    NSMutableSet *_typesToRead;
    _Bool _inTransaction;
    HKSource *_source;
    NSUUID *_promptSessionIdentifier;
    CDUnknownBlockType _promptHandler;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_source> *_sessionTimeoutSource;
}

@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutSource;
@property (nonatomic, getter=isInTransaction) _Bool inTransaction;
@property (copy, nonatomic, readonly) HKSource *source;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSSet *typesToWrite;
@property (copy, nonatomic, readonly) NSSet *typesToRead;
@property (nonatomic, readonly) NSUUID *promptSessionIdentifier;
@property (nonatomic, readonly) unsigned long long requestCount;
@property (copy, nonatomic) CDUnknownBlockType promptHandler;

- (id)description;
- (void)beginTransaction;
- (void)addRequest:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSource:(id)arg1;
- (void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2;
- (_Bool)promptIfNecessaryWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishRequestsWithError:(id)arg1;
- (void)_cancelTimeoutSource;

@end
