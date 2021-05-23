/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIRenderTask : NSObject

{
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(struct RenderTask *)arg1;

- (id)init;
- (void)dealloc;
- (id)waitUntilCompletedAndReturnError:(id *)arg1;
- (id)_pdfDataRepresentation;
- (struct RenderTask *)internalRepresentation;
- (id)initWithInternalTask:(struct RenderTask *)arg1;

@end
