/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreenMap : NSObject

{
    NSMapTable *_screens;
}

- (id)init;
- (void)addDetectedAirPlayScreen:(id)arg1;
- (void)removeAirPlayScreen:(id)arg1;
- (id)airPlayScreenForScreen:(id)arg1;
- (id)allAirPlayScreens;
- (unsigned long long)airPlayScreensCount;

@end
