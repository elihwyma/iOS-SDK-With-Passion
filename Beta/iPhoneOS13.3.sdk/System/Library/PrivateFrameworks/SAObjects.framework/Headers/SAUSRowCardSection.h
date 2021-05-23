/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUSCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRowCardSection : SAUSCardSection

@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) _Bool imageIsRightAligned;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;

+ (id)rowCardSection;
+ (id)rowCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
