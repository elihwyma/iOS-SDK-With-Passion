/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PVEffect, UIColor;

__attribute__((visibility("hidden")))
@interface TitleDefinition : NSObject

{
    _Bool _durationExplicitlySet;
    _Bool _anchorTargetOffsetExplicitlySet;
    _Bool _anchorLocalOffsetExplicitlySet;
    _Bool _audioEnabled;
    _Bool _temporarilyDisabled;
    int _duration;
    int _anchorTargetOffset;
    int _anchorLocalOffset;
    int _introFadeDuration;
    int _outroFadeDuration;
    PVEffect *_titleEffect;
    NSString *_titleName;
    NSString *_text;
    NSString *_text2;
    NSString *_text3;
    UIColor *_backgroundColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    NSDictionary *_extendedDefinition;
    NSDictionary *_titleEffectSettings;
}

@property (nonatomic, readonly) int titleGroup;
@property (nonatomic, readonly) int titleType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, getter=isGeneric) _Bool generic;
@property (nonatomic, readonly, getter=isMotion) _Bool motion;
@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *text2;
@property (retain, nonatomic) NSString *text3;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (nonatomic) int duration;
@property (nonatomic) int anchorTargetOffset;
@property (nonatomic) int anchorLocalOffset;
@property (nonatomic) int introFadeDuration;
@property (nonatomic) int outroFadeDuration;
@property (nonatomic, getter=isDurationExplicitlySet) _Bool durationExplicitlySet;
@property (nonatomic, getter=isAnchorTargetOffsetExplicitlySet) _Bool anchorTargetOffsetExplicitlySet;
@property (nonatomic, getter=isAnchorLocalOffsetExplicitlySet) _Bool anchorLocalOffsetExplicitlySet;
@property (retain, nonatomic) NSDictionary *extendedDefinition;
@property (nonatomic) _Bool audioEnabled;
@property (nonatomic, readonly) int animationOutDuration;
@property (nonatomic, readonly) int nominalOverallDuration;
@property (nonatomic, readonly) PVEffect *titleEffect;
@property (copy, nonatomic, readonly) NSString *titleEffectID;
@property (copy, nonatomic) NSDictionary *titleEffectSettings;
@property (nonatomic) _Bool temporarilyDisabled;

+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;
+ (int)titleGroupForTitleName:(id)arg1;
+ (int)titleTypeForTitleName:(id)arg1;
+ (id)displayNameForTitleName:(id)arg1;
+ (id)effectIDForTitleName:(id)arg1;
+ (id)titleStyleRootForTitleName:(id)arg1;
+ (id)titleStyleDisplayNameForTitleName:(id)arg1 themeID:(id)arg2;
+ (id)titleDefinitionPlaceholderForTheme:(id)arg1;
+ (id)titleNameFromTitleStyleRoot:(id)arg1 titleType:(int)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleName:(id)arg1;
- (id)plistRepresentation;
- (void)updateWithTitleDefinition:(id)arg1;

@end
