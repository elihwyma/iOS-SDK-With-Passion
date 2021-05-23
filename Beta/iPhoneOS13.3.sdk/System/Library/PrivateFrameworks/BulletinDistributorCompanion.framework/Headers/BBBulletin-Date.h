/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinBoard/BBBulletin.h>

@class NSDate;

@interface BBBulletin (Date)

@property (nonatomic, readonly) NSDate *expirationDate;

- (id)publishDate;
- (id)blt_uniqueKey;
- (id)dateOrRecencyDate;
- (id)sectionMatchID;
- (id)bltContext;
- (_Bool)matchesPublisherBulletinID:(id)arg1 andRecordID:(id)arg2;

@end
