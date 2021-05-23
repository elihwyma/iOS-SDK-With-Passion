/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDate *snippetEndDate;
@property (copy, nonatomic) NSDate *snippetStartDate;
@property (copy, nonatomic) NSString *timeZoneId;

+ (id)eventSnippet;
+ (id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
