/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTEffect.h>

@class UIColor;

@interface JTTextEffect : JTEffect

@property (nonatomic, readonly) unsigned long long dynamicTextType;
@property (nonatomic, readonly) UIColor *customTextEditTintColor;
@property (nonatomic, readonly) _Bool textBakedIn;

+ (_Bool)supportsSecureCoding;
+ (double)JT_systemFontWeightFromName:(id)arg1;
+ (id)JT_systemFontDesignFromName:(id)arg1;
+ (unsigned int)JT_symbolicTraitsFromName:(id)arg1;
+ (id)JT_fontWithName:(id)arg1;
+ (struct CGAffineTransform)transformFromEffectSize:(struct CGSize)arg1 toBasis:(struct CGRect)arg2 localToWorld:(struct CGAffineTransform)arg3 basisOrigin:(int)arg4;
+ (id)dynamicTextPlaceholderMap;
+ (id)placeHolderTextForDynamicTextType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)strings;
- (unsigned long long)maxCharacters;
- (id)initWithEffectID:(id)arg1;
- (void)beginTextEditing;
- (_Bool)hasDynamicText;
- (_Bool)wasDynamicTextSet;
- (void)updateDynamicTextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)enableDynamicLineSpacingForDiacritics:(_Bool)arg1;
- (void)setString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFont:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFontSize:(float)arg1 atIndex:(unsigned long long)arg2;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (id)editUIProperties;
- (void)setupLocalizedText;
- (void)setFontScale:(float)arg1 atIndex:(unsigned long long)arg2;
- (id)defaultTypingAttributes:(unsigned long long)arg1;
- (id)textFrames:(CDStruct_1b6d18a9)arg1;
- (id)textFrames:(CDStruct_1b6d18a9)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (id)textTransforms:(CDStruct_1b6d18a9)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (long long)textHitTest:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (void)endTextEditing;
- (void)setDynamicTextString:(id)arg1 forType:(unsigned long long)arg2;
- (id)customTextEditColor;

@end
