/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPersonNameComponents, NSString;

@interface CNNameComponentsStringTokenizer : NSObject

{
    NSString *_string;
    NSPersonNameComponents *_components;
    NSArray *_tokens;
}

@property (copy) NSString *string;
@property (retain) NSPersonNameComponents *components;
@property (retain) NSArray *tokens;

+ (id)componentsFromString:(id)arg1;
+ (id)tokensFromString:(id)arg1 nameOrder:(long long *)arg2;
+ (id)whitespaceTokens:(id)arg1;
+ (_Bool)isNameSuffix:(id)arg1;
+ (_Bool)isNamePrefix:(id)arg1;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)arg1;
+ (_Bool)isNobiliaryParticle:(id)arg1;
+ (id)namePrefixElements;
+ (id)nameComponentElements;
+ (id)nameSuffixElements;
+ (id)nobiliaryParticleElements;
+ (id)uncachedNameComponentElements;

- (id)initWithString:(id)arg1;
- (id)parseComponents;
- (void)removeParentheticalContent;
- (void)extractNicknameFromQuotedContent;
- (void)extractNameSuffixFromEnd;
- (void)extractNamePrefixFromBeginning;
- (void)adjustTokensForNobiliaryParticles;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)arg1;

@end
