/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEChromaKeyeriOS : PAEFilterDefaultBase

{
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
    struct HGBitmapLoader *_lutsBitmapLoaderCache;
}

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (void)createLutForNode:(struct HGNode *)arg1 input:(int)arg2 rect:(const struct HGRect *)arg3 omKeyer:(struct PAEKeyerOMKeyer2D *)arg4;

@end
