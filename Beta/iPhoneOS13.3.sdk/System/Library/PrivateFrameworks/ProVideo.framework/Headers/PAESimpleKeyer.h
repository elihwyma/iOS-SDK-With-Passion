/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEKeyer.h>

@interface PAESimpleKeyer : PAEKeyer

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (_Bool)pullInitialKey:(id *)arg1;
- (_Bool)isSimpleKey;
- (HGRef_265f9e4c)getKeyerNode:(HGRef_265f9e4c)arg1 omKeyer:(struct PAEKeyerOMKeyer2D *)arg2 atTime:(CDUnion_baaf6063)arg3;
- (_Bool)finishInitialSetup:(id *)arg1;
- (_Bool)oscIsPublishable;
- (void)createLutForNode:(struct HGNode *)arg1 input:(int)arg2 rect:(const struct HGRect *)arg3 omKeyer:(struct PAEKeyerOMKeyer2D *)arg4;

@end
