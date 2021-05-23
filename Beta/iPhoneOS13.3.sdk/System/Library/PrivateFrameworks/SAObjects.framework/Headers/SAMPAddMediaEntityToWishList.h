/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;

+ (id)addMediaEntityToWishList;
+ (id)addMediaEntityToWishListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
