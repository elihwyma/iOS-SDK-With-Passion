/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface UNNotificationAction : NSObject

{
    NSString *_identifier;
    NSString *_title;
    unsigned long long _options;
    NSString *_textInputButtonTitle;
    NSString *_textInputPlaceholder;
    NSURL *_url;
}

@property (copy, nonatomic, readonly) NSString *textInputButtonTitle;
@property (copy, nonatomic, readonly) NSString *textInputPlaceholder;
@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long options;

+ (_Bool)supportsSecureCoding;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6;

@end
