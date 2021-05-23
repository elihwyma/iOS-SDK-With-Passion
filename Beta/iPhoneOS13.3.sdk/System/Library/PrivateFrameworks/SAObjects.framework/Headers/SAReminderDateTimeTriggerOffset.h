/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SAReminderDateTimeTriggerOffset : AceObject <Swift>

@property (copy, nonatomic) NSString *offsetTimeUnit;
@property (copy, nonatomic) NSNumber *offsetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dateTimeTriggerOffset;
+ (id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
