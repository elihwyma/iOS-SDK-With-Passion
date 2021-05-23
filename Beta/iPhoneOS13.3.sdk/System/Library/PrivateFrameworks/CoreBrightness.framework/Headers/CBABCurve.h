/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CBABCurve : NSObject

{
    struct {
        float minimumBrightness;
        float maximumBrightness;
        float bl1;
        float bl2;
        float e1;
        float e2;
        float eThresh;
    } pref;
    float currentLux;
    float mappedBrightness;
    NSObject<OS_os_log> *_logHandle;
    unsigned long long _version;
}

@property (readonly) unsigned long long version;

- (id)init;
- (id)description;
- (id)initWithUUID:(id)arg1;
- (unsigned long long)getVersion;
- (_Bool)setLux:(float)arg1;
- (float)getLinearBrightness;
- (void)updateALSParametersForDisplayBrightness:(float)arg1;
- (void)resetToDefaultState;
- (id)copyUserPrefState;
- (void)setSavedPrefences:(id)arg1;

@end
