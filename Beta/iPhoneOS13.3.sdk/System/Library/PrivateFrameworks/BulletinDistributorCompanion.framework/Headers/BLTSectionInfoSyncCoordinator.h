/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BLTSectionInfoSyncCoordinator : NSObject

{
    unsigned long long _stateHandler;
    CDUnknownBlockType _infoProvider;
    NSMutableArray *_alertingSectionIDs;
    NSMutableDictionary *_alertingSectionState;
    unsigned long long _mostRecentIndex;
    unsigned long long _mostRecentIndexSinceSync;
}

@property (copy, nonatomic) CDUnknownBlockType infoProvider;
@property (retain, nonatomic) NSMutableArray *alertingSectionIDs;
@property (retain, nonatomic) NSMutableDictionary *alertingSectionState;
@property (nonatomic) unsigned long long mostRecentIndex;
@property (nonatomic) unsigned long long mostRecentIndexSinceSync;

- (void)dealloc;
- (id)description;
- (id)initWithAlertingSectionIDs:(id)arg1 infoProvider:(CDUnknownBlockType)arg2;
- (unsigned long long)performSyncForSectionID:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)arg1;
- (void)sectionInfoSendCompleted:(unsigned long long)arg1;

@end
