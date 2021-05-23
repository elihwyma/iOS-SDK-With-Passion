/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SFSearchResult_SpotlightExtras.h>

@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (retain, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *compatibilityTitle;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (_Bool)isQuickGlance;
- (void)setSimpleTitle:(id)arg1;
- (id)simpleTitle;
- (id)section_header;

@end
