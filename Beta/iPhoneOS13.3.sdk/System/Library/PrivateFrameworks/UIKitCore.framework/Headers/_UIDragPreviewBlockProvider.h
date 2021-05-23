/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIDragPreview, _UIDraggingImageComponent;

@protocol _UIDragPreviewProvider;

__attribute__((visibility("hidden")))
@interface _UIDragPreviewBlockProvider : NSObject

{
    CDUnknownBlockType _previewProviderBlock;
    _UIDraggingImageComponent *_imageComponent;
    UIDragPreview *_preview;
}

@property (nonatomic, readonly) id <_UIDragPreviewProvider> _dragPreviewProvider;
@property (nonatomic, readonly) UIDragPreview *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)previewProviderWithBlock:(CDUnknownBlockType)arg1;

- (id)_duiPreview;
- (id)imageComponent;
- (id)_createImageComponent;

@end
