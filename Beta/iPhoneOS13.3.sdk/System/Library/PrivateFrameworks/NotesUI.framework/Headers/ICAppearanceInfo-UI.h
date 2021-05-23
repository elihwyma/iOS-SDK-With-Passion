/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAppearanceInfo.h>

@class UITraitCollection;

@interface ICAppearanceInfo (UI)

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) double navigationBarAlpha;

+ (id)currentInfo;

@end
