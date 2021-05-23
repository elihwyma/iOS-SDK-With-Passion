/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/HLPHelpItem.h>

@class NSArray, NSString;

@interface HLPHelpTopicItem : HLPHelpItem

{
    NSString *_anchor;
    NSString *_hrefID;
    NSString *_glossaryIdentifierString;
    NSArray *_categories;
}

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *hrefID;
@property (copy, nonatomic) NSString *glossaryIdentifierString;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic, readonly, getter=isPassionPoints) _Bool passionPoints;
@property (nonatomic, readonly, getter=isGlossary) _Bool glossary;
@property (nonatomic, readonly, getter=isCopyright) _Bool copyright;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3;
- (_Bool)categoryContainKey:(id)arg1;

@end
