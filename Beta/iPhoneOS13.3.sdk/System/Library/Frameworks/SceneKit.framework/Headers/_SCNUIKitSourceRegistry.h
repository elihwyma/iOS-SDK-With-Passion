/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCNUIKitSourceRegistry : NSObject

{
    NSMutableArray *_sources;
}

+ (id)sharedInstance;
+ (void)registerUIKitSource:(id)arg1;
+ (void)unregisterUIKitSource:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)remove:(id)arg1;
- (void)apply:(CDUnknownBlockType)arg1;
- (void)add:(id)arg1;

@end
