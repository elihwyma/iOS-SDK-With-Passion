/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSError, NSMutableArray, NSString;

@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFMediaValueManager : NSObject <Swift>

{
    _Bool _hasPendingWrites;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableArray *_transactionStack;
    NSError *_cachedPlaybackStateWriteError;
}

@property (retain, nonatomic) NSMutableArray *transactionStack;
@property (retain, nonatomic) NSError *cachedPlaybackStateWriteError;
@property (weak, nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) _Bool hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (id)initWithMediaProfileContainer:(id)arg1;
- (_Bool)hasPendingWritesForRouteID:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(_Bool)arg3;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(_Bool)arg2;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(_Bool)arg3 notifyDidUpdate:(_Bool)arg4;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;

@end
