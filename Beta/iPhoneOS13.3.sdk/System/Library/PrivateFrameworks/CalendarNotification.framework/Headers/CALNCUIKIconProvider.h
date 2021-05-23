/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNCUIKIconProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)_parseIconIdentifier:(id)arg1 intoDate:(id *)arg2 calendar:(id *)arg3 type:(long long *)arg4;
+ (id)_identifierEncodingAllowedCharacters;

- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

@end
