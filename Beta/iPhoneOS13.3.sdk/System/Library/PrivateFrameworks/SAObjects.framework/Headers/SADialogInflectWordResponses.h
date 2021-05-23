/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SADialogInflectWordResponses : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *inflectWordResponses;

+ (id)inflectWordResponses;
+ (id)inflectWordResponsesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
