/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BLTGizmoLegacyMap : NSObject

{
    NSMutableDictionary *_gizmoBulletinKeyMap;
    NSMutableDictionary *_phoneBulletinKeyMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)phonePublisherBulletinIDForGizmoKey:(id)arg1;
- (id)phoneSectionIDForGizmoKey:(id)arg1;
- (void)_addMapKey:(id)arg1 value:(id)arg2 bulletinKey:(id)arg3 version:(unsigned long long)arg4 versionDictionary:(id)arg5;
- (void)mapBulletin:(id)arg1 bulletinMapProperty:(unsigned long long)arg2;
- (void)unmapBulletin:(id)arg1;
- (id)categoryIDForBulletinKey:(id)arg1;
- (id)sectionSubtypeForBulletinKey:(id)arg1;
- (id)gizmoPublisherBulletinIDForPhoneKey:(id)arg1;
- (id)gizmoSectionInfoForPhoneKey:(id)arg1;

@end
