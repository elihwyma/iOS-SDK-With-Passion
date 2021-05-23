/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject

{
    NSString *_identifier;
    NSURL *_URL;
    NSString *_type;
    unsigned long long _family;
    UNNotificationAttachmentOptions *_options;
}

@property (nonatomic, readonly) unsigned long long family;
@property (copy, nonatomic, readonly) UNNotificationAttachmentOptions *options;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *type;

+ (_Bool)supportsSecureCoding;
+ (id)_systemDirectoryURL;
+ (unsigned long long)stagingActionForAttachmentURL:(id)arg1 bundleProxy:(id)arg2 error:(id *)arg3;
+ (id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5;

@end
