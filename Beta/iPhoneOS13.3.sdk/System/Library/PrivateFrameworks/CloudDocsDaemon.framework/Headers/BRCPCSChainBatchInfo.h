/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAppLibrary, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject

{
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableDictionary *_halfChainedRecordMap;
    NSMutableSet *_alreadyHalfChainedRecords;
    NSMutableArray *_recordsForFirstPhase;
    BRCAppLibrary *_appLibrary;
    _Bool _should2PhasePCSChain;
}

@property (nonatomic, readonly) unsigned long long batchCount;
@property (nonatomic, readonly) NSArray *recordsForFirstPhase;
@property (nonatomic, readonly) NSArray *recordsForSecondPhase;
@property (nonatomic, readonly) NSDictionary *halfChainedRecordMap;
@property (nonatomic, readonly) _Bool should2PhasePCSChain;

- (void)_chainPreppedRecordToParent:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;
- (_Bool)containsRecordInfo:(id)arg1;
- (void)prepareFirstPhaseRecordBatch;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (void)chainPreparedRecordBatch:(id)arg1;

@end
