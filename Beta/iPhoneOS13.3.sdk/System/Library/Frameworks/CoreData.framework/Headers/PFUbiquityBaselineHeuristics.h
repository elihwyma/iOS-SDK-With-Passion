/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineHeuristics : NSObject

{
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_modelVersionHash;
    long long _numRequiredTransactions;
    long long _storeSize;
    long long _logSize;
    long double _logToStoreSizeRatio;
    long long _minLogBytes;
    PFUbiquityKnowledgeVector *_currentBaselineKV;
    PFUbiquityKnowledgeVector *_currentKV;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic) long long numRequiredTransactions;
@property (nonatomic, readonly) long long storeSize;
@property (nonatomic, readonly) long long logSize;
@property (nonatomic) long double logToStoreSizeRatio;
@property (nonatomic) long long minLogBytes;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentBaselineKV;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentKV;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copy;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)setStoreSize:(long long)arg1;
- (void)setLogSize:(long long)arg1;
- (long long)bytesForFileAtPath:(id)arg1;
- (_Bool)haveEnoughTransactionsToRoll;
- (_Bool)logsConsumeEnoughDiskSpace;
- (void)updateHeuristics;
- (_Bool)canRollBaseline:(id *)arg1;

@end
