/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *internalVerifications;
@property (copy, nonatomic) NSArray *serverChecksums;
@property (copy, nonatomic) NSArray *syncDebugInfo;

+ (id)serverVerifyResponse;
+ (id)serverVerifyResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
