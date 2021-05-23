/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAReminderTrigger.h>

@class NSString, NSURL, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (copy, nonatomic) NSURL *contactIdentifier;
@property (copy, nonatomic) NSString *internalGUID;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *mobileSpace;
@property (copy, nonatomic) NSString *timing;

+ (id)locationTrigger;
+ (id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
