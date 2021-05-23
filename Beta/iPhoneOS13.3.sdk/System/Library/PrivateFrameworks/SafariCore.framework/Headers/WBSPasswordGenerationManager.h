/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface WBSPasswordGenerationManager : NSObject

{
    struct _LXLexicon *_lexiconForEnglish;
    struct _LXLexicon *_lexiconForUserLocale;
    NSDictionary *_passwordRequirementsByDomain;
}

@property (copy, nonatomic) NSDictionary *passwordRequirementsByDomain;

+ (id)requirementsForPasswordRuleSet:(id)arg1 respectingMinLength:(id)arg2 maxLength:(id)arg3;
+ (_Bool)passwordLooksLikePasswordManagerGeneratedPassword:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)defaultRequirementsForURL:(id)arg1;
- (_Bool)passwordGenerationIsDisallowedByRequirements:(id)arg1;
- (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
- (_Bool)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
- (void)_lexiconEnumerateEntries:(struct _LXLexicon *)arg1 forString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_moreTypeablePassword;
- (_Bool)_tokensContainUnwantedWords:(id)arg1;
- (id)defaultRequirementsForDomain:(id)arg1;
- (id)initWithPasswordRequirementsByDomain:(id)arg1;
- (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;
- (id)generatedPasswordMatchingRequirements:(id)arg1;

@end
