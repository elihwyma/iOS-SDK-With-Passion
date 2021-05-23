/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface BLTMessageDigest : NSObject

{
    NSData *_messageDigest;
}

@property (retain, nonatomic) NSData *messageDigest;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (_Bool)isEqualToMessageDigest:(id)arg1;

@end
