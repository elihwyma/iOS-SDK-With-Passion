/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDate, NSString;

@interface SACalendarRecurrence : AceObject <Swift>

@property (nonatomic) long long endCount;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) int frequency;
@property (nonatomic) long long interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
