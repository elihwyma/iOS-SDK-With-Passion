/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@protocol PVCompositeDelegate;

@interface JTCustomRenderProperties : NSObject

{
    _Bool _wantsPickerTapPoint;
    id <PVCompositeDelegate> _renderingDelegate;
    id _metadata;
}

@property (nonatomic, readonly) id <PVCompositeDelegate> renderingDelegate;
@property (nonatomic, readonly) id metadata;
@property (nonatomic) _Bool wantsPickerTapPoint;

+ (id)newCustomRenderProperties:(id)arg1 metadata:(id)arg2;

@end
