/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <UserNotificationsServer/UNSAttachmentData.h>

@class NSString;

@interface UNSImageAttachmentData : UNSAttachmentData

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isFileValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeForThumbnailOptions:(id)arg1;
- (id)thumbnailPNGOfSize:(struct CGSize)arg1 forThumbnailOptions:(id)arg2;

@end
