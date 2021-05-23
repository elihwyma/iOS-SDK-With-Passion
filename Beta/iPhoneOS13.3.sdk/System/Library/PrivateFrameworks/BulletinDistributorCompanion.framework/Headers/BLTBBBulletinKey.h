/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BLTBBBulletinKey : NSObject

{
    NSString *_sectionID;
    NSString *_publisherMatchID;
}

@property (copy, nonatomic, readonly) NSString *sectionID;
@property (copy, nonatomic, readonly) NSString *publisherMatchID;

+ (id)bulletinKeyWithSectionID:(id)arg1 publisherMatchID:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyString;
- (id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2;

@end
