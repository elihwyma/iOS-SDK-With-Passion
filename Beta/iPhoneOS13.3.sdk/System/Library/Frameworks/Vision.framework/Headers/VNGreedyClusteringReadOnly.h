/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, VNClusteringLogger, VNSuggestionsLogger;

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadOnly : NSObject

{
    VNClusteringLogger *_clusteringLogger;
    VNSuggestionsLogger *_suggestionsLogger;
    NSString *_cacheFolderPath;
    float _thresholdN;
    float _thresholdSL;
    float _thresholdTorso;
    NSString *_type;
    NSData *_state;
    _Bool _vectorMapReadOnlyFlag;
    unsigned long long _faceprintRevision;
    NSString *_ageClassifierFilePath;
    float _ageClassifierBabyThreshold;
    float _ageClassifierKidThreshold;
    shared_ptr_8fc713d1 m_ClusteringImpl_const;
}

+ (id)getRepresentativenessForFaces:(id)arg1 error:(id *)arg2;
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id *)arg3;
+ (id)nonGroupedGroupID;
+ (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 *)arg2;
+ (void)addFaceObservations:(id)arg1 withGroupingIdentifiers:(id)arg2 toFaceDescriptorBuffer:(struct ImageDescriptorBufferJoint *)arg3;

- (id).cxx_construct;
- (_Bool)cancelClustering:(id *)arg1;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)getClusterState:(id *)arg1;
- (id)getClusteredIds:(id *)arg1;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id *)arg2;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;
- (id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;
- (id)getAllClustersFromStateAndReturnError:(id *)arg1;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;
- (_Bool)_parseOptions:(id)arg1 error:(id *)arg2;
- (void)initializeLogging;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (void)setGreedyClustererFaces_const:(shared_ptr_8fc713d1)arg1;
- (id)convertUpdatePairsToClusters:(vector_22dfb71c *)arg1;
- (id)getLevel0ClusteredIdsForFaceId:(id)arg1 error:(id *)arg2;

@end
