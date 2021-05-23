/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString;

@interface SAReminderPhonePayload : AceObject

@property (copy, nonatomic) NSString *phoneCallType;
@property (copy, nonatomic) NSString *recipient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)phonePayload;
+ (id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
