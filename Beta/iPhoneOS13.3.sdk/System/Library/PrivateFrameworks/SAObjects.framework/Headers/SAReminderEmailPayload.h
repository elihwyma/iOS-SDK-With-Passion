/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject

@property (copy, nonatomic) NSArray *recipientsTo;
@property (copy, nonatomic) NSString *subject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
