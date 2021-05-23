/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBWallpaperEffectView;

@interface SBWallpaperStyleInfo : NSObject <Swift>

{
    CDStruct_e838e30c _priorityInfo[12];
    SBWallpaperEffectView *_wallpaperEffectView;
    CDStruct_059c2b36 _styleTransitionState;
}

@property (retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView;
@property (nonatomic) CDStruct_059c2b36 styleTransitionState;
@property (nonatomic, readonly) long long highestValidPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setPriorityInfo:(CDStruct_e838e30c)arg1 forPriority:(long long)arg2;
- (void)removePriorityInfoForPriority:(long long)arg1;
- (CDStruct_e838e30c)priorityInfoForPriority:(long long)arg1;
- (void)enumerateValidPrioritiesUsingBlock:(CDUnknownBlockType)arg1;

@end
