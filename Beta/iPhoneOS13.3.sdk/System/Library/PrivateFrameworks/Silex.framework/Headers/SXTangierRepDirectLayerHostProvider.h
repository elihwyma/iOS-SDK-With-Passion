/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

@interface SXTangierRepDirectLayerHostProvider : NSObject

{
    CALayer *_aboveRepsLayerHost;
    CALayer *_underRepsLayerHost;
    CALayer *_overlayLayerHost;
}

@property (retain, nonatomic) CALayer *aboveRepsLayerHost;
@property (retain, nonatomic) CALayer *underRepsLayerHost;
@property (retain, nonatomic) CALayer *overlayLayerHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)directLayerHostForRep:(id)arg1;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg1;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg1;
- (void)directLayerHostUpdateRepOverlayLayers:(id)arg1;

@end
