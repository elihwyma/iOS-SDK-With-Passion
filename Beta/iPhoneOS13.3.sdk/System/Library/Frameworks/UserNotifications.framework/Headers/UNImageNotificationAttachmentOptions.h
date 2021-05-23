/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationAttachmentOptions.h>

@class NSNumber, NSString;

@interface UNImageNotificationAttachmentOptions : UNNotificationAttachmentOptions

{
    _Bool _thumbnailHidden;
    _Bool _hiddenFromDefaultExpandedView;
    NSNumber *_thumbnailFrameNumber;
    struct CGRect _thumbnailClippingRect;
}

@property (nonatomic, readonly) _Bool hiddenFromDefaultExpandedView;
@property (copy, nonatomic, readonly) NSNumber *thumbnailFrameNumber;
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
- (id)initWithThumbnailHidden:(_Bool)arg1 thumbnailClippingRect:(struct CGRect)arg2 thumbnailFrameNumber:(id)arg3 hiddenFromDefaultExpandedView:(_Bool)arg4;

@end
