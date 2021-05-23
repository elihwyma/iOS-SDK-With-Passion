/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSData, NSString;

@interface SARefreshRequest : SAStartRequest

@property (copy, nonatomic) NSData *nlResultState;
@property (copy, nonatomic) NSData *serializedIntent;
@property (copy, nonatomic) NSString *source;

+ (id)refreshRequest;
+ (id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
