/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

@interface TwoNetsStyleTransfer : NSObject

{
    void *ctx;
    void *plan;
    CDStruct_2bc666a5 net;
    basic_string_90719d97 output_layer_name;
    unsigned long long dim_data0[5];
    unsigned long long dim_data0__small[5];
    unsigned long long dim_data2[5];
    unsigned long long dim_data2__small[5];
    struct __IOSurface *result;
    struct postprocessing_settings_t current_postprocessing_settings;
    NSString *currentNetworkPath;
}

+ (_Bool)supportsANE;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)load:(id)arg1 outputName:(id)arg2;
- (int)widthSmall;
- (int)widthBig;
- (int)heightSmall;
- (int)heightBig;
- (struct __IOSurface *)executeSyncWithImage:(struct __CVBuffer *)arg1 smallImage:(struct __CVBuffer *)arg2;

@end
