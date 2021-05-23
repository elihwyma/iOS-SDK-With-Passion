/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet;

@interface BBAttachments : NSObject

{
    long long primaryType;
    NSCountedSet *_additionalAttachments;
}

@property (retain, nonatomic) NSCountedSet *additionalAttachments;
@property (nonatomic) long long primaryType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (void)addAttachmentOfType:(long long)arg1;
- (_Bool)isEqualToAttachments:(id)arg1;

@end
