/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface MPVolumeHUDController : NSObject

{
    NSMutableSet *_displays;
    NSMutableSet *_categories;
    _Bool _needsUpdate;
}

@property (nonatomic, readonly) id mainContext;

+ (id)sharedInstance;

- (id)init;
- (void)setNeedsUpdate;
- (void)_updateVisibility;
- (void)addVolumeDisplay:(id)arg1;
- (void)removeVolumeDisplay:(id)arg1;
- (void)registerView:(id)arg1 inContext:(id)arg2;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;
- (void)_addCategory:(id)arg1;
- (void)_updateVisibilityForVolumeDisplays:(id)arg1 inWindowScene:(id)arg2;

@end
