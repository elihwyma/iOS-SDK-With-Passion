/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject

{
    _Bool _hasCustomDismissAction;
    _Bool _hasCustomSilenceAction;
    _Bool _shouldAllowInCarPlay;
    _Bool _shouldAllowSpoken;
    _Bool _privacyOptionShowTitle;
    _Bool _privacyOptionShowSubtitle;
    _Bool _preventAutomaticRemovalFromRecent;
    _Bool _revealAdditionalContentWhenPresented;
    _Bool _preventAutomaticLock;
    _Bool _preventDismissWhenClosed;
    _Bool _presentFullScreenAlertOverList;
    _Bool _shouldAllowActionsInCarPlay;
    _Bool _shouldAllowPersistentBannersInCarPlay;
    _Bool _playMediaWhenRaised;
    _Bool _preventClearFromList;
    _Bool _alwaysDisplayNotificationsIndicator;
    _Bool _suppressDelayForForwardedNotifications;
    _Bool _suppressDismissActionInCarPlay;
    NSArray *_actions;
    NSString *_identifier;
    NSArray *_intentIdentifiers;
    NSArray *_minimalActions;
    NSString *_privateBody;
    NSString *_summaryFormat;
    NSString *_backgroundStyle;
    NSString *_listPriority;
}

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) _Bool hasCustomDismissAction;
@property (nonatomic) _Bool hasCustomSilenceAction;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSArray *minimalActions;
@property (nonatomic) _Bool shouldAllowInCarPlay;
@property (nonatomic) _Bool shouldAllowSpoken;
@property (nonatomic) _Bool privacyOptionShowTitle;
@property (nonatomic) _Bool privacyOptionShowSubtitle;
@property (nonatomic) _Bool preventAutomaticRemovalFromRecent;
@property (nonatomic) _Bool revealAdditionalContentWhenPresented;
@property (nonatomic) _Bool preventAutomaticLock;
@property (nonatomic) _Bool preventDismissWhenClosed;
@property (nonatomic) _Bool presentFullScreenAlertOverList;
@property (nonatomic) _Bool shouldAllowActionsInCarPlay;
@property (nonatomic) _Bool shouldAllowPersistentBannersInCarPlay;
@property (nonatomic) _Bool playMediaWhenRaised;
@property (nonatomic) _Bool preventClearFromList;
@property (nonatomic) _Bool alwaysDisplayNotificationsIndicator;
@property (nonatomic) _Bool suppressDelayForForwardedNotifications;
@property (nonatomic) _Bool suppressDismissActionInCarPlay;
@property (copy, nonatomic) NSString *privateBody;
@property (copy, nonatomic) NSString *summaryFormat;
@property (copy, nonatomic) NSString *backgroundStyle;
@property (copy, nonatomic) NSString *listPriority;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
