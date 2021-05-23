/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface CFMGGetMobileGestaltStringResponse : SABaseCommand

@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getMobileGestaltStringResponse;
+ (id)getMobileGestaltStringResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
