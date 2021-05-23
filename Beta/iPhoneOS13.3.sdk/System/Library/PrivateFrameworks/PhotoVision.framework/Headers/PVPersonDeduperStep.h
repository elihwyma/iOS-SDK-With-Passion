/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMapTable, NSString, PVPersonClusterManager, PVPersonDeduperProfile;

@protocol PVPersonPromoterDelegate;

@interface PVPersonDeduperStep : NSObject

{
    _Bool _shouldStop;
    float _progress;
    PVPersonClusterManager *_personClusterManager;
    NSDictionary *_invalidCandidatesMapping;
    NSMapTable *_mergeRelations;
    id <PVPersonPromoterDelegate> _delegate;
    PVPersonDeduperProfile *_profile;
}

@property (nonatomic, readonly) PVPersonClusterManager *personClusterManager;
@property (nonatomic, readonly) NSDictionary *invalidCandidatesMapping;
@property (nonatomic, readonly) NSString *name;
@property (weak, nonatomic) id <PVPersonPromoterDelegate> delegate;
@property (nonatomic, readonly) NSMapTable *mergeRelations;
@property (nonatomic, readonly) PVPersonDeduperProfile *profile;
@property (nonatomic) _Bool shouldStop;
@property (nonatomic) float progress;
@property (nonatomic, readonly) NSString *metricsKey;

- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)initWithPersonClusterManager:(id)arg1 invalidCandidatesMapping:(id)arg2 profile:(id)arg3;
- (_Bool)shouldStopWithUpdateBlock:(CDUnknownBlockType)arg1;
- (id)_resolveMergeCandidate:(id)arg1 forPerson:(id)arg2;
- (id)mergeCandidatePersonsWithUpdateBlock:(CDUnknownBlockType)arg1;
- (_Bool)addPotentialMergeCandidateForPerson:(id)arg1 withOtherPerson:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (float)adjustedThreshold:(float)arg1 forMinAgeType:(unsigned short)arg2;

@end
