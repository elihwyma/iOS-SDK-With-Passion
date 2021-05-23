/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSString, SSDownload, SSPurchase, SSPurchaseResponse;

@protocol OS_dispatch_queue;

@interface MPStoreDownload : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_attributes;
    _Bool _canceled;
    NSMutableArray *_overridePhaseIdentifiers;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    NSString *_downloadFilePath;
    long long _type;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) long long bytesDownloaded;
@property (nonatomic, readonly) long long bytesTotal;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;
@property (nonatomic, readonly) long long downloadIdentifier;
@property (nonatomic, readonly) long long downloadSizeLimit;
@property (nonatomic, readonly) NSError *failureError;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly, getter=isPurchasing) _Bool purchasing;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic, readonly) unsigned long long libraryItemIdentifier;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *phaseIdentifier;
@property (nonatomic, readonly) NSError *purchaseError;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDictionary *rentalInformation;
@property (nonatomic, readonly, getter=isRestore) _Bool restore;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, readonly) long long type;

+ (_Bool)_getEffectiveStoreDownloadAttributes:(id *)arg1 forPlaybackItemMetadata:(id)arg2 attributes:(id)arg3;
+ (_Bool)canCreateStoreDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)_SSPurchaseForType:(long long)arg1 attributes:(id)arg2;
+ (id)storeDownloadForMediaItem:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2;
+ (id)storeDownloadForStoreOffer:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadWithDownloadIdentifier:(long long)arg1;

- (id)description;
- (id)assetsForType:(id)arg1;
- (_Bool)_isCanceled;
- (id)_SSDownload;
- (id)_SSPurchase;
- (id)_SSPurchaseResponse;
- (id)initWithType:(long long)arg1 attributes:(id)arg2;
- (void)resetCachedRentalInformation;
- (void)_setCanceled:(_Bool)arg1;
- (void)_setSSDownload:(id)arg1;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (id)_getDownloadFilePath;
- (void)_setDownloadFilePath:(id)arg1;
- (void)_addOverridePhaseIdentifier:(id)arg1;
- (void)_removeOverridePhaseIdentifier:(id)arg1;
- (id)_currentOverridePhaseIdentifier;
- (id)_valueForDownloadProperty:(id)arg1;

@end
