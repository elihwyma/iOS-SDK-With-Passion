/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *recognition;
@property (copy, nonatomic) NSString *userFacingReasonDescription;
@property (copy, nonatomic) NSString *userFacingReasonTitle;

+ (id)structuredDictationFailed;
+ (id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
