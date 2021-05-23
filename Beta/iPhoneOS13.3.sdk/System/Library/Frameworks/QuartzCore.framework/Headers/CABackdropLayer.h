/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSString;

@protocol CABackdropLayerDelegate><CALayerDelegate;

@interface CABackdropLayer : CALayer

{
    _Bool _disablesOccludedBackdropBlurs;
}

@property (getter=isEnabled) _Bool enabled;
@property (copy) NSString *groupName;
@property _Bool usesGlobalGroupNamespace;
@property double scale;
@property struct CGRect backdropRect;
@property double marginWidth;
@property _Bool disablesOccludedBackdropBlurs;
@property _Bool captureOnly;
@property _Bool allowsInPlaceFiltering;
@property _Bool reducesCaptureBitDepth;
@property _Bool ignoresScreenClip;
@property double zoom;
@property _Bool tracksLuma;
@property (weak) id <CABackdropLayerDelegate><CALayerDelegate> delegate;
@property (copy) NSString *statisticsType;
@property double statisticsInterval;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (id)statisticsValues;

@end
