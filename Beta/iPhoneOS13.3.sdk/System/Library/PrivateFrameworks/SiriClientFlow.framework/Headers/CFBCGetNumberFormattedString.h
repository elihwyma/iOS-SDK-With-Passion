/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *variant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNumberFormattedString;
+ (id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

@end
