/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet;

@protocol OS_dispatch_queue;

@interface FCFetchGroup : NSObject

{
    _Bool _shouldFilter;
    _Bool _isUserFacing;
    NSSet *_keys;
    id _context;
    long long _qualityOfService;
    long long _relativePriority;
    unsigned long long _numberOfFetchAttempts;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completion;
    NSDate *_requestDate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;
@property (retain, nonatomic) NSDate *requestDate;
@property (copy, nonatomic, readonly) NSSet *keys;
@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) _Bool shouldFilter;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) long long relativePriority;
@property (nonatomic, readonly) _Bool isUserFacing;
@property (nonatomic) unsigned long long numberOfFetchAttempts;

- (long long)comparePriority:(id)arg1;
- (id)initWithKeys:(id)arg1 context:(id)arg2 shouldFilter:(_Bool)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)fireCompletion;

@end
