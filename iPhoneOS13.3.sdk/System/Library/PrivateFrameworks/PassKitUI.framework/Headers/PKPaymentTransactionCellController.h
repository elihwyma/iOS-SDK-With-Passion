//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, PKObjectDownloader, PKPeerPaymentContactResolver;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionCellController : NSObject
{
    NSMutableDictionary *_iconCache;
    NSMutableArray *_iconCacheKeys;
    NSMutableOrderedSet *_highPriorityIconRequests;
    NSMutableOrderedSet *_lowPriorityIconRequests;
    NSMutableArray *_inflightRequests;
    BOOL _processingRequest;
    NSObject<OS_dispatch_queue> *_queueIcons;
//     struct os_unfair_lock_s _lockRequests;
    PKObjectDownloader *_fileDownloader;
    PKPeerPaymentContactResolver *_contactResolver;
}

+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 includeBankAccountSuffix:(BOOL)arg2 useGenericNameIfNoDescriptionAvailable:(BOOL)arg3;
+ (id)_statusAnnotationForTransaction:(id)arg1;
+ (id)_relativeDateForTransaction:(id)arg1;
+ (id)_billPaymentFundingSourceForTransaction:(id)arg1;
+ (id)presentationInformationForTransaction:(id)arg1 pass:(id)arg2 account:(id)arg3 deviceName:(id)arg4 context:(NSUInteger)arg5;
@property(readonly, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
// - (void).cxx_destruct;
- (id)fileDownloader;
- (id)_cacheImageFromDownloaderCacheForURL:(id)arg1;
- (id)_iconCacheKeyForMerchant:(id)arg1 size:(CGSize)arg2 imageOut:(id )arg3;
- (id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(CGSize)arg2 imageOut:(id )arg3;
- (id)_iconForCacheKey:(id)arg1;
- (void)queue_processNextIconRequest;
- (id)_iconForTransaction:(id)arg1 merchant:(id)arg2 size:(CGSize)arg3 requestType:(NSUInteger)arg4 iconHandler:(id /* CDUnknownBlockType */)arg5;
- (id)iconForMerchant:(id)arg1 size:(CGSize)arg2 requestType:(NSUInteger)arg3 iconHandler:(id /* CDUnknownBlockType */)arg4;
- (id)iconForTransaction:(id)arg1 size:(CGSize)arg2 requestType:(NSUInteger)arg3 iconHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)configureCell:(id)arg1 forTransaction:(id)arg2 paymentPass:(id)arg3 account:(id)arg4 detailStyle:(long long)arg5 deviceName:(id)arg6 avatarViewDelegate:(id)arg7;
- (id)initWithContactResolver:(id)arg1;

@end

