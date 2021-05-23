/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBAttachmentMetadata.h>

@class NSURL, NSUUID;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
