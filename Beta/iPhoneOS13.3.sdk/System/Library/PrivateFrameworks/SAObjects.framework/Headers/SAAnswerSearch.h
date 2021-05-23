/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SALocation;

@interface SAAnswerSearch : SADomainCommand

@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSString *miscQuestion;
@property (copy, nonatomic) NSString *placeAttribute;
@property (copy, nonatomic) NSArray *product;
@property (copy, nonatomic) NSString *timeQuestion;
@property (copy, nonatomic) NSString *verbType;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
