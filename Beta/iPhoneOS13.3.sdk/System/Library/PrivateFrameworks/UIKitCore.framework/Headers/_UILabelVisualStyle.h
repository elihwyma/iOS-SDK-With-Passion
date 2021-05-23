/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UILabelVisualStyle : NSObject

+ (id)inferredVisualStyle;

- (id)defaultFont;
- (_Bool)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)arg1 attributes:(id)arg2;
- (void)actionsForInitializationOfLabel:(id)arg1;
- (void)actionsForDeallocationOfLabel:(id)arg1;
- (_Bool)updatesTextColorOnUserInterfaceStyleChanges;
- (_Bool)shouldDelayStartMarquee;

@end
