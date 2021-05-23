/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLAddContentToWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;

+ (id)addContentToWatchList;
+ (id)addContentToWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
