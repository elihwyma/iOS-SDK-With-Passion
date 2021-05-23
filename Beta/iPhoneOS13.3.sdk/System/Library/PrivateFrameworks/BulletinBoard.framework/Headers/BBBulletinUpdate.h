/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject

{
    BBBulletin *_bulletin;
    unsigned long long _feeds;
}

@property (copy, nonatomic, readonly) BBBulletin *bulletin;
@property (nonatomic, readonly) unsigned long long feeds;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2;

@end
