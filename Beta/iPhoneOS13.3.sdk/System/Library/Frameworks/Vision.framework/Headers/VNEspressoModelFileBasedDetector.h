/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector : VNDetector

{
    void *_espressoContext;
    void *_espressoPlan;
    CDStruct_2bc666a5 _espressoNetwork;
    unsigned long long _networkRequiredInputImageWidth;
    unsigned long long _networkRequiredInputImageHeight;
}

@property (nonatomic, readonly) void *espressoContext;
@property (nonatomic, readonly) void *espressoPlan;
@property (nonatomic, readonly) CDStruct_2bc666a5 espressoNetwork;
@property (nonatomic, readonly) unsigned long long networkRequiredInputImageWidth;
@property (nonatomic, readonly) unsigned long long networkRequiredInputImageHeight;

+ (id)configurationOptionKeysForDetectorKey;

- (void)dealloc;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;

@end
