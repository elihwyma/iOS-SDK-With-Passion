//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStickerBackend-Protocol.h>

@class NSMutableArray, NSURL, NSUserDefaults;
@protocol AVTStickerBackendDelegate, AVTUILogger, OS_dispatch_queue;

@interface AVTStickerUserDefaultsBackend : NSObject <AVTStickerBackend>
{
    id <AVTStickerBackendDelegate> _stickerBackendDelegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTUILogger> _logger;
    NSUserDefaults *_userDefaults;
    NSURL *_cacheLocation;
    NSMutableArray *_stickers;
    NSUInteger _frequencyCounter;
}

@property(nonatomic) NSUInteger frequencyCounter; // @synthesize frequencyCounter=_frequencyCounter;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, nonatomic) NSURL *cacheLocation; // @synthesize cacheLocation=_cacheLocation;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <AVTStickerBackendDelegate> stickerBackendDelegate; // @synthesize stickerBackendDelegate=_stickerBackendDelegate;
// - (void).cxx_destruct;
- (id)stickersIndexesMatchingAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (void)updateStickerAtIndex:(NSUInteger)arg1;
- (void)addStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (id)addNextFrequencyCountToFrequencySum:(id)arg1;
- (id)nextFrequencyCount;
- (id)fetchStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (id)fetchMostRecentStickersWithLimit:(NSUInteger)arg1;
- (id)fetchAllStickers;
- (void)saveStickersToUserDefaults;
- (void)getStickersFromUserDefaults;
- (void)_recentStickersChangedExternally;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id )arg2;
- (void)dealloc;
- (id)initWithWorkQueue:(id)arg1 environment:(id)arg2 userDefaults:(id)arg3;

@end

