/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/_CUIRawDataRendition.h>

@class CUIRenditionMetrics, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUILayerStackRendition : _CUIRawDataRendition

{
    CUIRenditionMetrics *_renditionMetrics;
    NSMutableArray *_layers;
}

- (void)dealloc;
- (id)metrics;
- (id)layerReferences;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end
