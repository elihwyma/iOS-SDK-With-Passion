/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate

{
    _Bool _shouldSync;
}

@property (nonatomic, readonly) _Bool shouldSync;

+ (_Bool)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;

@end
