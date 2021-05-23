/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *acousticIdSearchSessionId;

+ (id)requestSearch;
+ (id)requestSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
