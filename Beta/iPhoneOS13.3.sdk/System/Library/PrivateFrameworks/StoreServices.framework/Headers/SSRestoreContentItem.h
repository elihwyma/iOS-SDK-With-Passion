/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface SSRestoreContentItem : NSObject

{
    NSNumber *_accountID;
    NSNumber *_originalPurchaserAccountID;
    NSString *_appleID;
    NSString *_bundleID;
    NSNumber *_cloudMatchStatus;
    _Bool _isRestore;
    NSMutableDictionary *_properties;
}

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *cloudItemID;
@property (retain, nonatomic) NSNumber *cloudMatchStatus;
@property (copy, nonatomic) NSString *downloadKind;
@property (copy, nonatomic) NSString *podcastEpisodeGUID;
@property (copy, nonatomic) NSString *storeAccountAppleID;
@property (retain, nonatomic) NSNumber *storeAccountID;
@property (retain, nonatomic) NSNumber *storeOriginalPurchaserAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (retain, nonatomic) NSNumber *storeItemID;
@property (copy, nonatomic) NSString *storeSoftwareVersionID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isDRMFree) _Bool DRMFree;
@property (copy, nonatomic) NSString *storeFlavor;
@property (copy, nonatomic) NSString *videoDimensions;

- (id)init;
- (void)dealloc;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (id)initWithRestoreDownload:(id)arg1;
- (_Bool)isEligibleForRestore:(id *)arg1;
- (id)_initSSRestoreContentItem;
- (void)setValue:(id)arg1 forAssetProperty:(id)arg2;
- (id)_restoreKeyForAssetProperty:(id)arg1;
- (id)_restoreKeyForDownloadProperty:(id)arg1;
- (id)copyRestoreDictionary;

@end
