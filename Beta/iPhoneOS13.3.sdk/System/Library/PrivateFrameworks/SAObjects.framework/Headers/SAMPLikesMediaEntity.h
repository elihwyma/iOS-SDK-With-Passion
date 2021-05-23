/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPLikesMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedSharedUserId;

+ (id)likesMediaEntity;
+ (id)likesMediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
