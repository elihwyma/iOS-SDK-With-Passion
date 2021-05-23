/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAGuidanceGuideSection : SADomainObject

@property (copy, nonatomic) NSArray *guideUtterances;
@property (copy, nonatomic) NSString *sectionName;

+ (id)guideSection;
+ (id)guideSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
