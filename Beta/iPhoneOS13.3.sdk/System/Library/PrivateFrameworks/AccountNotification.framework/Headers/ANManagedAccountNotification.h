/*
 Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

#import <CoreData/NSManagedObject.h>

@class ANManagedNotificationAction, NSDate, NSString;

@interface ANManagedAccountNotification : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *activateButtonTitle;
@property (retain, nonatomic) NSString *dismissButtonTitle;
@property (retain, nonatomic) NSString *callbackMachServiceName;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSString *accountTypeID;
@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) ANManagedNotificationAction *activateAction;
@property (retain, nonatomic) ANManagedNotificationAction *dismissAction;
@property (retain, nonatomic) ANManagedNotificationAction *clearAction;

- (void)takeValuesFromAccountNotification:(id)arg1;

@end
