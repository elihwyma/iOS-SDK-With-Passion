/*
 Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

#import <Foundation/NSObject.h>

@class CPMLDB, CPMLSchema, CPMLStorageManager, NSDictionary;

@protocol CPMLAlgorithmProtocol;

@interface CPMLTrainer : NSObject

{
    _Bool shouldFail;
    struct sqlite3 *modelDB;
    NSDictionary *modelPlist;
    CPMLDB *cpmlDB;
    struct CPMLCDB *cpCDB;
    struct CPMLAlgorithm *cpMLAlgo;
    struct CPMLRemapper *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics *trainerCPStatistics;
    struct CPMLSerialization *trainerCPSerializer;
    struct CPMLTunableData *cpTuneableData;
    int mapFunction;
    struct CPMLDelegate *_cpmlDelegate;
    CPMLStorageManager *_storageManager;
    id <CPMLAlgorithmProtocol> _theDelegate;
}

- (void)dealloc;
- (id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3;
- (void)train:(_Bool)arg1;
- (void)buildTrainingMachineLearningAlgorithm:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (id)getSolution;

@end
