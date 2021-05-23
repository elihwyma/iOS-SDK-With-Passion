/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationAttachmentOptions.h>

@class NSString;

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions

{
    _Bool _thumbnailHidden;
    CDStruct_1b6d18a9 _thumbnailTimestamp;
    struct CGRect _thumbnailClippingRect;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 thumbnailTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool thumbnailHidden;
@property (nonatomic, readonly) struct CGRect thumbnailClippingRect;

+ (_Bool)supportsSecureCoding;
+ (id)optionsFromOptionsDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThumbnailHidden:(_Bool)arg1 thumbnailClippingRect:(struct CGRect)arg2 thumbnailTimestamp:(CDStruct_1b6d18a9)arg3;

@end
