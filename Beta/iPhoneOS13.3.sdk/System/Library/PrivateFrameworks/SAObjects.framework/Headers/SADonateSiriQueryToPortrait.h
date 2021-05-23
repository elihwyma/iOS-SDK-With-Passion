/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *originalQuery;
@property (copy, nonatomic) NSString *qid;
@property (nonatomic) long long rank;
@property (nonatomic) double rankerConfidence;

+ (id)donateSiriQueryToPortrait;
+ (id)donateSiriQueryToPortraitWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
