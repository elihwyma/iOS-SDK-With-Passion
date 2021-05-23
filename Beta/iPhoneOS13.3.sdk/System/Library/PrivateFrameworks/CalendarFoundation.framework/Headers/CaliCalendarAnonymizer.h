/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CaliCalendarAnonymizer : NSObject

+ (void)dump;
+ (id)sharedAnonymizedDomainName;
+ (id)sharedAnonymizedStrings;
+ (id)sharedAnonymizedStringsCount;
+ (id)anonymizedString:(id)arg1 withAnonymizer:(CDUnknownBlockType)arg2;
+ (id)anonymizedString:(id)arg1;
+ (id)anonymizedSummary:(id)arg1;
+ (id)anonymizedDescription:(id)arg1;
+ (id)anonymizedUID:(id)arg1;
+ (id)anonymizedURNUID:(id)arg1;
+ (id)anonymizedEmailCommonName:(id)arg1;
+ (id)anonymizedEmail:(id)arg1;
+ (id)anonymizedLocation:(id)arg1;
+ (id)anonymizedPhoneNumber:(id)arg1;
+ (id)anonymizedWebURL:(id)arg1;
+ (id)anonymizedAddressURL:(id)arg1;

@end
