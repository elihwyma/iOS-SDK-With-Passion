/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SASExtractSpeechDataCompleted : SADomainCommand <Swift>

@property (copy, nonatomic) NSString *speechDataUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)extractSpeechDataCompleted;
+ (id)extractSpeechDataCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
