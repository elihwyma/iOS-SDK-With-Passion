/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PXAssetMetadataDonator : NSObject

{
    NSCountedSet *_locationDescriptions;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_locationDescriptionsByAssetLocalIdentifiers;
}

@property (retain, nonatomic) NSCountedSet *locationDescriptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSMutableDictionary *locationDescriptionsByAssetLocalIdentifiers;

+ (id)new;
+ (id)sharedDonator;

- (id)init;
- (id)_init;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)donateMetadataForAsset:(id)arg1;
- (void)donate:(id)arg1;
- (void)_notifyWhenDonationIsComplete:(CDUnknownBlockType)arg1;

@end
