/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNDateComponentsEquivalence : NSObject

+ (_Bool)isComponent:(long long)arg1 equivalentToComponent:(long long)arg2;
+ (_Bool)isCalendar:(id)arg1 equivalentToCalendar:(id)arg2;
+ (_Bool)canUnifyComponents:(id)arg1 withComponents:(id)arg2;

@end
