/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject

{
    NSURL *_persistentStoreURL;
    NSMutableDictionary *_momentAssetPairsByNodeUUID;
    NSMutableDictionary *_curationInformationByNodeUUID;
    NSMutableDictionary *_locationInformationByNodeUUID;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) NSURL *persistentStoreURL;
@property (nonatomic, readonly) NSMutableDictionary *momentAssetPairsByNodeUUID;
@property (nonatomic, readonly) NSMutableDictionary *curationInformationByNodeUUID;
@property (nonatomic, readonly) NSMutableDictionary *locationInformationByNodeUUID;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (id)initWithManager:(id)arg1;
- (void)save;
- (void)invalidateCache;
- (void)setKeyAssetLocalIdentifier:(id)arg1 forNodeIdentifier:(id)arg2 withAssociatedMomentUUID:(id)arg3;
- (id)keyAssetLocalIdentifierForNodeIdentifier:(id)arg1 withAssociatedMomentUUIDs:(id)arg2;
- (_Bool)momentAssetPairs:(id)arg1 areValidWithAssociatedMomentUUIDs:(id)arg2;
- (void)setCurationInformation:(id)arg1 forNode:(id)arg2;
- (id)curationInformationForNode:(id)arg1;
- (void)setLocationInformation:(id)arg1 forLocationNode:(id)arg2 locationMask:(unsigned long long)arg3;
- (id)locationInformationForLocationNode:(id)arg1 locationMask:(unsigned long long)arg2;

@end
