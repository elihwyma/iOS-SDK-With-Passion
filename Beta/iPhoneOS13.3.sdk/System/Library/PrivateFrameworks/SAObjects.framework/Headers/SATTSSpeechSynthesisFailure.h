/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reasonDescription;

+ (id)speechSynthesisFailure;
+ (id)speechSynthesisFailureWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
