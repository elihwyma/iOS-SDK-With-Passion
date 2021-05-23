/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PIGlobalSettings : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (id)globalSettings;

- (id)init;
- (id)decoratorRenderFiltersForImages;
- (id)decoratorRenderFiltersForVideos;

@end
