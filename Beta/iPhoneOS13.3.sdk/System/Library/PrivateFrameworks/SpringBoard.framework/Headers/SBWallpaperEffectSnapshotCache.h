/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject

{
    NSMutableSet *_mappedImageKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)wallpaperWillChangeForVariant:(long long)arg1;
- (id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(CDUnknownBlockType)arg2;

@end
