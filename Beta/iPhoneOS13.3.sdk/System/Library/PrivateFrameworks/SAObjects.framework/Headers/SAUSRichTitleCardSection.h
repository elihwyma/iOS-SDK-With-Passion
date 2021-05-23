/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUSTitleCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (nonatomic) _Bool centered;
@property (copy, nonatomic) NSString *contentRatingText;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) SAUIImageResource *titleImage;

+ (id)richTitleCardSection;
+ (id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
