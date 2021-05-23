/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSMutableArray, NSString, NSURL, NSUserDefaults;

@protocol AVTStickerBackendDelegate, AVTUILogger, OS_dispatch_queue;

@interface AVTStickerUserDefaultsBackend : NSObject <Swift>

{
    id <AVTStickerBackendDelegate> _stickerBackendDelegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTUILogger> _logger;
    NSUserDefaults *_userDefaults;
    NSURL *_cacheLocation;
    NSMutableArray *_stickers;
    unsigned long long _frequencyCounter;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) NSURL *cacheLocation;
@property (retain, nonatomic) NSMutableArray *stickers;
@property (nonatomic) unsigned long long frequencyCounter;
@property (weak, nonatomic) id <AVTStickerBackendDelegate> stickerBackendDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStickersFromUserDefaults;
- (id)fetchAllStickers;
- (id)fetchMostRecentStickersWithLimit:(unsigned long long)arg1;
- (id)fetchStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (void)addStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (void)updateStickerAtIndex:(unsigned long long)arg1;
- (void)saveStickersToUserDefaults;
- (id)stickersIndexesMatchingAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (id)nextFrequencyCount;
- (id)addNextFrequencyCountToFrequencySum:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 environment:(id)arg2 userDefaults:(id)arg3;
- (void)_recentStickersChangedExternally;

@end
