/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUEditPluginManager : NSObject

{
    unsigned long long _mediaType;
    NSArray *__plugins;
}

@property (copy, nonatomic, setter=_setPlugins:) NSArray *_plugins;
@property (readonly) unsigned long long mediaType;

+ (id)sharedManagerForMediaType:(unsigned long long)arg1;

- (id)_initWithMediaType:(unsigned long long)arg1;
- (_Bool)hasPlugins;
- (id)_allowedPluginTypes;
- (void)rediscoverAvailablePlugins;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (id)pluginActivities;

@end
