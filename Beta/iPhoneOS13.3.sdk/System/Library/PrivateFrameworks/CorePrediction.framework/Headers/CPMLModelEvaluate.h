/*
 Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

#import <Foundation/NSObject.h>

@class CPMLSchema, CPMLStorageManager, NSMutableArray, NSNumber, NSString;

@protocol CPMLAlgorithmProtocol;

@interface CPMLModelEvaluate : NSObject

{
    _Bool enableCacheString;
    _Bool keepInMemory;
    _Bool shouldFail;
    struct sqlite3 *db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    struct CPMLAlgorithm *cpMLAlgo;
    struct CPMLSerialization *trainerCPDeSerializer;
    struct CPMLRemapper *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics *trainerCPStatistics;
    struct CPMLDelegate *_cpmlDelegate;
    struct CPMLTunableData *cpTuneableData;
    int mapFunction;
    vector_12bd641b boundedRemappedValues;
    struct CPMLDelegateEngine *_delegateEngine;
    CPMLStorageManager *_storageManager;
    id <CPMLAlgorithmProtocol> _delegateAlgorithm;
}

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)updateModel:(id)arg1;
- (id)initWithModel:(id)arg1 withPropertyList:(id)arg2;
- (id)fileProtectionClassRequest:(id)arg1;
- (void *)getModelData;
- (id)evalString:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalArray:(id)arg1;
- (id)evalDict:(id)arg1;
- (void)boundResult:(id)arg1;
- (void)setCPMLAlgorithm:(id)arg1;
- (void)setCPMLAlgorithmEngine:(id)arg1;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector *)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4;
- (id)doEvaluate:(struct CPMLFeatureVector *)arg1 withBoundedList:(vector_12bd641b *)arg2;
- (int)getAttributeType:(id)arg1;
- (void)constructVector:(struct CPMLFeatureVector *)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4;
- (id)evalCTypesV:(char *)arg1;

@end
