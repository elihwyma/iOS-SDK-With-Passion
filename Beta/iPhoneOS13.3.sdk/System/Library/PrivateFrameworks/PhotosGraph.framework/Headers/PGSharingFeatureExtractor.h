/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGGraph, PGManager;

@interface PGSharingFeatureExtractor : NSObject

{
    PGManager *_manager;
    PGGraph *_graph;
}

+ (id)extractFeatureNodesFromAsset:(id)arg1 andPersonLocalIdentifiers:(id)arg2 inGraph:(id)arg3;
+ (id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)arg1;
+ (id)featuresFilename;
+ (id)recordsFilename;

- (id)persistedFeatures;
- (id)initWithManager:(id)arg1 graph:(id)arg2;
- (id)_loadAllPersistedSharingRecordsFromDisk;
- (void)prefetchMomentNodeAndAssetInSharingRecords:(id)arg1;
- (id)persistedSharingRecords;
- (id)persistedSharingRecordsForType:(unsigned long long)arg1;
- (_Bool)persistSharingRecords:(id)arg1;
- (id)extractSharingRecordsWithProgressBlock:(CDUnknownBlockType)arg1;
- (_Bool)persistFeatures:(id)arg1;
- (id)extractFeaturesFromSharingRecords:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;

@end
