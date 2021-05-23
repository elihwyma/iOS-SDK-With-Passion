/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NPSManager, NSMutableDictionary, NSSet;

@protocol OS_dispatch_queue;

@interface BLTMuteSync : NSObject

{
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSSet *mutedForTodaySectionIdentifiers;

- (id)init;
- (void)dealloc;
- (void)_loadMutedSectionIdentifiers;
- (void)_updateObservers;
- (void)_queue_sync;
- (_Bool)isMutedForTodaySectionIdentifier:(id)arg1;
- (void)addSectionIdentifiers:(id)arg1;
- (void)removeSectionIdentifiers:(id)arg1;
- (void)_cleanMuteIdentifiers;

@end
