/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString;

@interface _LSDisplayNameConstructor : NSObject

{
    NSString *_originalName;
    NSString *_baseName;
    NSString *_extension;
    NSString *_secondaryExtension;
    unsigned int _wantsHiddenExtension:1;
    unsigned int _isFolder:1;
    unsigned int _isApplication:1;
    unsigned int _hadNonASCIICharacter:1;
    unsigned int _hadColonInFSName:1;
    unsigned int _hadBiDiControlCharacter:1;
    unsigned int _hadForbiddenCharacter:1;
}

+ (id)suffixForRemoteXCTests;
+ (void)setSuffixForRemoteXCTests:(id)arg1;
+ (id)displayNameConstructorWithContext:(struct LSContext *)arg1 bundle:(unsigned int)arg2 bundleClass:(const unsigned int *)arg3 node:(id)arg4 preferredLocalizations:(id)arg5 error:(id *)arg6;
+ (id)displayNameConstructorWithContext:(struct LSContext *)arg1 node:(id)arg2 error:(id *)arg3;
+ (id)displayNameConstructorsWithContext:(struct LSContext *)arg1 node:(id)arg2 error:(id *)arg3;
+ (_Bool)showAllExtensions;
+ (void)setShowAllExtensions:(_Bool)arg1;
+ (id)visuallyOrderCharactersInString:(id)arg1 error:(id *)arg2;
+ (void)getExtensionRange:(struct _NSRange *)arg1 secondaryExtensionRange:(struct _NSRange *)arg2 fromFileName:(id)arg3 considerConfusables:(_Bool)arg4;
+ (id)concatenateBaseName:(id)arg1 andExtension:(id)arg2;

- (id)init;
- (id)unlocalizedNameWithContext:(struct LSContext *)arg1 asIfShowingAllExtensions:(id)arg2;
- (_Bool)showExtensionWithContext:(struct LSContext *)arg1 asIfShowingAllExtensions:(id)arg2;
- (id)combineBaseName:(id)arg1 extension:(id)arg2;
- (void)getTransformedBaseName:(id *)arg1 extension:(id *)arg2 needsBiDiControlCharacters:(_Bool [2])arg3;
- (id)unlocalizedNameWithContext:(struct LSContext *)arg1;
- (void)getUnlocalizedBaseName:(id *)arg1 extension:(id *)arg2 requiresAdditionalBiDiControlCharacters:(_Bool *)arg3;
- (id)initWithContext:(struct LSContext *)arg1 node:(id)arg2 bundleClass:(const unsigned int *)arg3 desiredDisplayName:(id)arg4 treatAsFSName:(_Bool)arg5;
- (_Bool)mayHideExtensionWithContext:(struct LSContext *)arg1;
- (_Bool)canSetExtensionHiddenWithContext:(struct LSContext *)arg1;
- (void)initNodeBitsWithContext:(struct LSContext *)arg1 node:(id)arg2 bundleClass:(const unsigned int *)arg3;
- (void)initContentBitsWithDisplayName:(id)arg1 treatAsFSName:(_Bool)arg2;
- (void)initNamePartsWithDisplayName:(id)arg1;
- (id)insertNameComponentBiDiControlCharacters:(id)arg1;
- (id)insertCompleteNameBiDiControlCharacters:(id)arg1;
- (id)transformBeforeCombining:(id)arg1 needsBiDiControlCharacters:(_Bool *)arg2;
- (id)balanceBiDiControlCharacters:(id)arg1;
- (_Bool)isStringNaturallyRTL:(id)arg1;
- (id)replaceForbiddenCharacters:(id)arg1;
- (_Bool)wantsHiddenExtension;
- (id)cleanSecondaryExtension:(id)arg1;
- (id)balanceBiDiControlCharacter:(unsigned short)arg1 inString:(id)arg2 imbalanceAmount:(long long)arg3;

@end
