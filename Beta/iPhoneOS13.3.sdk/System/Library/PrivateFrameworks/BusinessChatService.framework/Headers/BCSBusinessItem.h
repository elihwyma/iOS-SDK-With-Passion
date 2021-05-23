/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class BCSOpenHours, NSArray, NSDate, NSString, NSURL;

@interface BCSBusinessItem : NSObject

{
    NSString *_bizID;
    NSString *_phoneNumber;
    NSString *_name;
    long long _phoneHash;
    NSURL *_squareLogoURL;
    NSURL *_wideLogoURL;
    unsigned long long _tintColor;
    unsigned long long _backgroundColor;
    NSArray *_callToActions;
    NSArray *_visibilityItems;
    BCSOpenHours *_messagingOpenHours;
    BCSOpenHours *_callingOpenHours;
    _Bool _isVerified;
    NSString *_intentID;
    NSString *_groupID;
}

@property (nonatomic, readonly) BCSOpenHours *messagingOpenHours;
@property (nonatomic, readonly) BCSOpenHours *callingOpenHours;
@property (nonatomic, readonly) NSArray *visibilityItems;
@property (copy, nonatomic, readonly) NSString *bizID;
@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long phoneHash;
@property (copy, nonatomic, readonly) NSURL *squareLogoURL;
@property (copy, nonatomic, readonly) NSURL *wideLogoURL;
@property (nonatomic, readonly) unsigned long long tintColor;
@property (nonatomic, readonly) unsigned long long backgroundColor;
@property (nonatomic, readonly) NSArray *callToActions;
@property (nonatomic, readonly) _Bool isVerified;
@property (nonatomic, readonly) NSString *intentID;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) _Bool isAvailableForMessaging;
@property (nonatomic, readonly) NSDate *dateWhenMessagingAvailableNext;
@property (nonatomic, readonly) _Bool isAvailableForCalling;
@property (nonatomic, readonly) NSDate *dateWhenCallingAvailableNext;

+ (_Bool)supportsSecureCoding;
+ (id)_businessItemsFromChatSuggestJSONObj:(id)arg1;
+ (id)_businessItemsFromChatSuggestMessageDictionary:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)callToAction;
- (id)initWithJSONObj:(id)arg1;
- (id)initWithBizID:(id)arg1 phoneNumber:(id)arg2 name:(id)arg3 phoneHash:(long long)arg4 squareLogoURL:(id)arg5 wideLogoURL:(id)arg6 tintColor:(unsigned long long)arg7 backgroundColor:(unsigned long long)arg8 callToActions:(id)arg9 messagingOpenHours:(id)arg10 callingOpenHours:(id)arg11 isVerified:(_Bool)arg12 intentID:(id)arg13 groupID:(id)arg14 visibilityItems:(id)arg15;
- (unsigned long long)_integerForHexString:(id)arg1;
- (id)initWithChatSuggestMessage:(id)arg1 bucketID:(id)arg2;
- (_Bool)_isAvailableForMessagingAtDate:(id)arg1;
- (id)_dateWhenMessagingAvailableNextAfterDate:(id)arg1;
- (_Bool)_isAvailableForCallingAtDate:(id)arg1;
- (id)_dateWhenCallingAvailableNextAfterDate:(id)arg1;
- (id)_callToActionForLanguage:(id)arg1;
- (_Bool)_isChatSuggestVisibleForVisibilityItem:(id)arg1 DSID:(id)arg2 bizID:(id)arg3;
- (id)_selectedVisibilityItemForLanguage:(id)arg1 country:(id)arg2;

@end
