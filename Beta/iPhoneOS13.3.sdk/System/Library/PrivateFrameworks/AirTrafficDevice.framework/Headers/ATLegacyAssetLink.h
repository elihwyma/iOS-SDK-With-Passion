/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATLegacyMessageLink, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol ATAssetLinkDelegate, ATLegacyAssetLinkProgressDelegate, OS_dispatch_queue;

@interface ATLegacyAssetLink : NSObject

{
    NSMutableSet *_unqueuedAssets;
    NSMutableDictionary *_enqueuedAssetsByDataClass;
    ATLegacyMessageLink *_messageLink;
    NSMutableDictionary *_syncIDToItemPidMap;
    _Bool _open;
    id <ATAssetLinkDelegate> _delegate;
    NSMutableArray *_readyDataClasses;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_hostVersion;
    NSArray *_supportedDataClasses;
    id <ATLegacyAssetLinkProgressDelegate> _progressDelegate;
}

@property (copy, nonatomic) NSArray *supportedDataClasses;
@property (copy, nonatomic) NSArray *readyDataClasses;
@property (weak, nonatomic) id <ATLegacyAssetLinkProgressDelegate> progressDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (weak, nonatomic) id <ATAssetLinkDelegate> delegate;

- (_Bool)open;
- (void)close;
- (unsigned long long)priority;
- (unsigned long long)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (id)enqueueAssets:(id)arg1 force:(_Bool)arg2;
- (_Bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (_Bool)linkIsReady;
- (void)_handleFileCompleteMessage:(id)arg1;
- (void)_handleFileErrorMessage:(id)arg1;
- (void)_handleFileProgressMessage:(id)arg1;
- (void)_enqueueAndRequestAssets;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (id)_assetsForDataClass:(id)arg1 identifier:(id)arg2;
- (id)_manifestEntryForATAsset:(id)arg1;
- (id)_assetManifestForDataclasses:(id)arg1;
- (id)initWithMessageLink:(id)arg1 hostVersion:(id)arg2;

@end
