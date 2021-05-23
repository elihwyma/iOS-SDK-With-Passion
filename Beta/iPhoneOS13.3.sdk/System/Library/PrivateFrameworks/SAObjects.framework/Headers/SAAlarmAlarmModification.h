/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmAlarmModification : AceObject <Swift>

@property (copy, nonatomic) NSArray *addedFrequency;
@property (copy, nonatomic) NSURL *alarmId;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSArray *removedFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)alarmModification;
+ (id)alarmModificationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
