/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@interface EKRecents : NSObject

+ (Class)crRecentContactsLibraryClass;
+ (struct NSObject *)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)crRecentsDomainCalendarString;
+ (id)crAddressKindEmailString;
+ (void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)crAddressKindPhoneNumberString;
+ (_Bool)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;

@end
