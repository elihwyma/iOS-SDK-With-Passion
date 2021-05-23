/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject

{
    BBBulletinUpdate *_bulletinUpdate;
    unsigned long long _transactionID;
}

@property (copy, nonatomic, readonly) BBBulletinUpdate *bulletinUpdate;
@property (nonatomic, readonly) unsigned long long transactionID;

+ (_Bool)supportsSecureCoding;
+ (id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;

@end
