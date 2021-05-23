/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject

@property (copy, nonatomic) NSArray *supportedFeatures;

+ (id)checkForGuideUpdateContext;
+ (id)checkForGuideUpdateContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
