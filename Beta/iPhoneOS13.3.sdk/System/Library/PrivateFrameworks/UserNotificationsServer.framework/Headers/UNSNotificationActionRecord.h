/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSArray, NSString, NSURL;

@interface UNSNotificationActionRecord : NSObject

{
    _Bool _authenticationRequired;
    _Bool _destructive;
    _Bool _foreground;
    _Bool _shouldPreventNotificationDismiss;
    NSString *_actionType;
    NSString *_identifier;
    NSString *_textInputButtonTitle;
    NSArray *_textInputButtonTitleLocalizationArguments;
    NSString *_textInputButtonTitleLocalizationKey;
    NSString *_textInputPlaceholder;
    NSArray *_textInputPlaceholderLocalizationArguments;
    NSString *_textInputPlaceholderLocalizationKey;
    NSString *_title;
    NSArray *_titleLocalizationArguments;
    NSString *_titleLocalizationKey;
    NSURL *_url;
}

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired;
@property (nonatomic, getter=isDestructive) _Bool destructive;
@property (nonatomic, getter=isForeground) _Bool foreground;
@property (nonatomic) _Bool shouldPreventNotificationDismiss;
@property (copy, nonatomic) NSString *textInputButtonTitle;
@property (copy, nonatomic) NSArray *textInputButtonTitleLocalizationArguments;
@property (copy, nonatomic) NSString *textInputButtonTitleLocalizationKey;
@property (copy, nonatomic) NSString *textInputPlaceholder;
@property (copy, nonatomic) NSArray *textInputPlaceholderLocalizationArguments;
@property (copy, nonatomic) NSString *textInputPlaceholderLocalizationKey;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleLocalizationArguments;
@property (copy, nonatomic) NSString *titleLocalizationKey;
@property (copy, nonatomic) NSURL *url;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
