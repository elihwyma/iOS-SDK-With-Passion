/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSDictionary;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *backgroundColors;
@property (copy, nonatomic) NSDictionary *textColors;
@property (copy, nonatomic) NSArray *titles;

+ (id)segmentedControl;
+ (id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
