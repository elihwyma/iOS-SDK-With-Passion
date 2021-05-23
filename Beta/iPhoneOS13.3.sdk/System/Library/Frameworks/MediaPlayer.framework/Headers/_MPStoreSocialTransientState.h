/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelSocialPerson, MPStoreSocialRequestOperation;

@protocol OS_dispatch_queue;

@interface _MPStoreSocialTransientState : NSObject

{
    long long _followState;
    long long _followPendingRequestState;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPStoreSocialRequestOperation *_latestFollowOperation;
    MPStoreSocialRequestOperation *_latestFollowPendingRequestOperation;
    MPModelSocialPerson *_person;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) MPModelSocialPerson *person;
@property (nonatomic, readonly) long long followState;
@property (nonatomic, readonly) long long followPendingRequestState;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1;
- (id)newOperationForTransientFollowState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)newOperationForTransientFollowPendingRequestState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endIfNeeded;

@end
