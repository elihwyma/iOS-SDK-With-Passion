/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString;

@interface SALogSignatureWithABC : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSDictionary *subTypeContext;

+ (id)logSignatureWithABC;
+ (id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
