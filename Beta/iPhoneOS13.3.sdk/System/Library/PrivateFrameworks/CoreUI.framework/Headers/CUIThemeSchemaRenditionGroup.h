/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject

{
    CUIRenditionKey *_baseKey;
    NSArray *_renditions;
    CDStruct_26b2aa83 *_part;
}

@property (retain, nonatomic) NSArray *renditions;

+ (id)renditionGroupsForRenditions:(id)arg1 part:(CDStruct_26b2aa83 *)arg2;

- (void)dealloc;
- (id)description;
- (id)baseKey;
- (id)initWithRenditions:(id)arg1 part:(CDStruct_26b2aa83 *)arg2;
- (long long)partFeatures;
- (id)themeSchemaLayers;
- (void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2;
- (id)schemaLayersAndLayerGroups;
- (id)_renditionsSortedIntoLayers;
- (id)_layerNameForDrawingLayer:(long long)arg1;
- (id)_layerNameForState:(long long)arg1;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2;
- (void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 state:(unsigned long long)arg3 drawingLayer:(unsigned long long)arg4;
- (id)mutablePSDImageRef;
- (id)mutablePSDImageRefColumnStyle;

@end
