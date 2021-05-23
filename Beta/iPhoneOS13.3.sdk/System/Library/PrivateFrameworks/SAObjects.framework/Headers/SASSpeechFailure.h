/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (nonatomic) long long errorCode;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *reasonDescription;

+ (id)speechFailure;
+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
