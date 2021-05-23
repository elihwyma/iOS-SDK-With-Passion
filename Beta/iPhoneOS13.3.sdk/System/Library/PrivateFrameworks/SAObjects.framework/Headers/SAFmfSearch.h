/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SALocation;

@interface SAFmfSearch : SADomainCommand

@property (retain, nonatomic) SALocation *currentLocation;
@property (copy, nonatomic) NSArray *friends;
@property (copy, nonatomic) NSString *proximity;
@property (retain, nonatomic) SALocation *requestedLocation;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
