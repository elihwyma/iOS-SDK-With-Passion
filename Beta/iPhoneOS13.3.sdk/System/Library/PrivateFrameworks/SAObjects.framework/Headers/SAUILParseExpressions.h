/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *expressions;
@property (retain, nonatomic) SARemoteDevice *targetDevice;

+ (id)parseExpressions;
+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
