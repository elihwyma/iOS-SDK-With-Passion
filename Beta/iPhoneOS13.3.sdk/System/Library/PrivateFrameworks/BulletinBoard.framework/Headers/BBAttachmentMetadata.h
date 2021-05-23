/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSURL, NSUUID;

@interface BBAttachmentMetadata : NSObject

{
    NSUUID *_UUID;
    long long _type;
    NSURL *_URL;
}

@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSURL *URL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasContentModificationsRelativeTo:(id)arg1;
- (id)_initWithUUID:(id)arg1 type:(long long)arg2 URL:(id)arg3;

@end
