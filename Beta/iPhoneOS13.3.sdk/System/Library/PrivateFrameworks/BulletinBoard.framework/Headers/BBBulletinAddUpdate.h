/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinAddUpdate : BBBulletinUpdate

{
    _Bool _shouldPlayLightsAndSirens;
}

@property (nonatomic, readonly) _Bool shouldPlayLightsAndSirens;

+ (_Bool)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(_Bool)arg3;

@end
