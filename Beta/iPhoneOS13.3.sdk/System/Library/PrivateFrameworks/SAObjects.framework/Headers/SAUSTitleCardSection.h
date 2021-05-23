/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUSCardSection.h>

@class NSString;

@interface SAUSTitleCardSection : SAUSCardSection

@property (copy, nonatomic) NSString *title;

+ (id)titleCardSection;
+ (id)titleCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
