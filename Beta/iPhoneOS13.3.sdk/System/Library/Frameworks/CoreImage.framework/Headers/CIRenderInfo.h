/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIRenderInfo : NSObject

{
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_pdfDataRepresentation;
- (id)initWithCompletedTask:(id)arg1;
- (long long)kernelExecutionCycles;
- (long long)pixelsOverdrawn;
- (double)timeForNodeID:(unsigned long long)arg1;

@end
