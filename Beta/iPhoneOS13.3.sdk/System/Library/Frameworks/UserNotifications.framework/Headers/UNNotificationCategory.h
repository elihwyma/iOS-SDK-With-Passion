/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNNotificationCategory : NSObject

{
    NSArray *_actions;
    NSArray *_minimalActions;
    NSArray *_intentIdentifiers;
    NSString *_identifier;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
    NSString *_actionsMenuTitle;
    UNNotificationAction *_alternateAction;
    unsigned long long _options;
    unsigned long long _backgroundStyle;
    unsigned long long _listPriority;
}

@property (copy, nonatomic, readonly) NSArray *minimalActions;
@property (copy, nonatomic, readonly) NSString *actionsMenuTitle;
@property (copy, nonatomic, readonly) UNNotificationAction *alternateAction;
@property (nonatomic, readonly) unsigned long long backgroundStyle;
@property (nonatomic, readonly) unsigned long long listPriority;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *actions;
@property (copy, nonatomic, readonly) NSArray *intentIdentifiers;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic, readonly) NSString *categorySummaryFormat;

+ (_Bool)supportsSecureCoding;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 options:(unsigned long long)arg5;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 options:(unsigned long long)arg4;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 options:(unsigned long long)arg5;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 categorySummaryFormat:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 options:(unsigned long long)arg7;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 alternateAction:(id)arg4 intentIdentifiers:(id)arg5 hiddenPreviewsBodyPlaceholder:(id)arg6 categorySummaryFormat:(id)arg7 actionsMenuTitle:(id)arg8 options:(unsigned long long)arg9 backgroundStyle:(unsigned long long)arg10 listPriority:(unsigned long long)arg11;

@end
