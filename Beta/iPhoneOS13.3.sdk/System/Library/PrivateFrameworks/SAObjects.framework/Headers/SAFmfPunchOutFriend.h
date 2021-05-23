/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAFmfPunchOutFriend : SADomainCommand

@property (copy, nonatomic) NSArray *friends;

+ (id)punchOutFriend;
+ (id)punchOutFriendWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
