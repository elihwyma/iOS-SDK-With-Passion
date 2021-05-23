/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSData, NSDate, NSString;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSData *rawData;

+ (id)showLocalSearchResult;
+ (id)showLocalSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
