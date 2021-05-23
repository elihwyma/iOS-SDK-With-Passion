/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SACalendarEventSearchCompleted : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)eventSearchCompleted;
+ (id)eventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)eventSearchCompletedWithResults:(id)arg1;

- (id)groupIdentifier;
- (id)initWithResults:(id)arg1;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
