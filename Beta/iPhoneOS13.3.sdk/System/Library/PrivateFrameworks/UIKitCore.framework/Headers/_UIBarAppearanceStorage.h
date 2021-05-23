/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceStorage : NSObject

{
    NSMutableDictionary *_backgroundImages;
}

+ (long long)typicalBarPosition;

- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (_Bool)hasAnyCustomBackgroundImage;
- (void)setAllBackgroundImages:(id)arg1;
- (id)allBackgroundImages;

@end
