/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UITraitCollection.h>

@class ICAppearanceInfo;

@interface UITraitCollection (IC)

@property (nonatomic, readonly) ICAppearanceInfo *ic_appearanceInfo;
@property (nonatomic, readonly) _Bool ic_isDark;

+ (_Bool)ic_alwaysShowLightContent;
+ (void)setIc_alwaysShowLightContent:(_Bool)arg1;

- (void)ic_performAsCurrent:(CDUnknownBlockType)arg1;
- (id)ic_traitCollectionByAppendingNonNilTraitCollection:(id)arg1;

@end
