/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAUIImageResource;

@interface SAUIAlternateProviderResult : SADomainObject

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *numberOfResults;
@property (retain, nonatomic) SAUIImageResource *providerImage;
@property (copy, nonatomic) NSString *providerName;

+ (id)alternateProviderResult;
+ (id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
