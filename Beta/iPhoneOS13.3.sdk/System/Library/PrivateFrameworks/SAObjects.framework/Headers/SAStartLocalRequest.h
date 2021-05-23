/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientBoundCommands;

+ (id)startLocalRequest;
+ (id)startLocalRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
