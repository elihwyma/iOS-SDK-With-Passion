/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAFetchUserActivity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *internalGUID;

+ (id)fetchUserActivity;
+ (id)fetchUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
