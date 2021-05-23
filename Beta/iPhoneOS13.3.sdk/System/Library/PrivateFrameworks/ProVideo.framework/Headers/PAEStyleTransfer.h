/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@class EspressoImage2Image, NSString;

@interface PAEStyleTransfer : PAEFilterDefaultBase

{
    struct HGRef<HStyleTransfer> _styleTransfer;
    NSString *_modelName;
    _Bool _defaultsLoaded;
    EspressoImage2Image *_espresso;
    long long _currentQualityLevel;
    double _currentAspectRatio;
}

@property (retain, nonatomic) EspressoImage2Image *espresso;
@property (nonatomic) long long currentQualityLevel;
@property (nonatomic) double currentAspectRatio;

+ (_Bool)hasEspressoVersion;

- (void)dealloc;
- (id).cxx_construct;
- (id)properties;
- (_Bool)loadModel:(id)arg1;
- (void)loadDefaults;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)variesOverTime;
- (id)pathForSettings;
- (id)_modeNames;
- (id)modelNameAtIndex:(unsigned long long)arg1;

@end
