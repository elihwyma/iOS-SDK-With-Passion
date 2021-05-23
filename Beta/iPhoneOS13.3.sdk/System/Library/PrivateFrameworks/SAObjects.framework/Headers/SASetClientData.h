/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASetClientData : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;

+ (id)setClientData;
+ (id)setClientDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
