/*
 Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

#import <Foundation/NSObject.h>

@class ANNotificationAction, NSDate, NSDictionary, NSString;

@interface ANAccountNotification : NSObject

{
    NSString *_identifier;
    NSString *_accountTypeID;
    NSString *_title;
    NSString *_message;
    NSDate *_date;
    NSString *_activateButtonTitle;
    ANNotificationAction *_activateAction;
    ANNotificationAction *_dismissAction;
    NSDictionary *_userInfo;
    NSString *_eventIdentifier;
    long long _destinations;
    long long _sectionSubtype;
    NSString *_callbackMachService;
}

@property (copy, nonatomic) NSString *callbackMachService;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *accountTypeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *activateButtonTitle;
@property (retain, nonatomic) ANNotificationAction *activateAction;
@property (retain, nonatomic) ANNotificationAction *dismissAction;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *eventIdentifier;
@property (nonatomic) long long destinations;
@property (nonatomic) long long sectionSubtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithManagedObject:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initForAccountWithType:(id)arg1;

@end
