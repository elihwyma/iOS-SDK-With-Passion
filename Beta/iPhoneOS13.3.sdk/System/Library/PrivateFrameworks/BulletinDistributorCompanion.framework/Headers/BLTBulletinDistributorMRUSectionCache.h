/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

@interface BLTBulletinDistributorMRUSectionCache : NSObject

{
    NSMutableOrderedSet *_sectionIDs;
}

- (id)init;
- (id)sectionIDs;
- (void)cacheSectionID:(id)arg1;

@end
