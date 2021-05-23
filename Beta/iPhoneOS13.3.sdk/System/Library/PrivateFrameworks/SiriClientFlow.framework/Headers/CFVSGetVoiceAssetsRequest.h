/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface CFVSGetVoiceAssetsRequest : SABaseClientBoundCommand

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *quality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getVoiceAssetsRequest;
+ (id)getVoiceAssetsRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

@end
