/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _UIVisualEffectLayerConfig;

@interface _UIVisualEffectConfig : NSObject

{
    NSMutableArray *_layerConfigs;
    _UIVisualEffectLayerConfig *_contentConfig;
}

@property (nonatomic, readonly) NSArray *layerConfigs;
@property (nonatomic, readonly) _UIVisualEffectLayerConfig *contentConfig;

+ (id)configWithContentConfig:(id)arg1;
+ (id)configWithLayerConfigs:(id)arg1;

- (id)description;
- (void)addLayerConfig:(id)arg1;
- (void)enumerateLayerConfigs:(CDUnknownBlockType)arg1;

@end
