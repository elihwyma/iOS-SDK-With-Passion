/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PBSlideBase.h>

__attribute__((visibility("hidden")))
@interface PBSlide : PBSlideBase

+ (void)readFromSlideContainer:(id)arg1 toSlide:(id)arg2 state:(id)arg3;
+ (id)notesSlideFromSlideContainer:(id)arg1 state:(id)arg2;
+ (void)readThemeOverridesFromSlideContainer:(id)arg1 toSlideChild:(id)arg2 doesFollowMasterScheme:(_Bool)arg3 state:(id)arg4;

@end
