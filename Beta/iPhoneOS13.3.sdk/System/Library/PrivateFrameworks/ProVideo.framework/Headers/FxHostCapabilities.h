/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxHostCapabilities : NSObject

{
    struct FxHostCapabilitiesPriv *_hostCapPriv;
}

+ (void)setRemoteHostCapabilities:(id)arg1;
+ (id)getRemoteHostCapabilities;

- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)upscalesFields;
- (_Bool)hostIsMotion;
- (_Bool)hostIsFCE;
- (_Bool)hostIsFCP;
- (unsigned int)hostVersionNumber;
- (id)hostID;
- (_Bool)formatsFloatRGBABitmapsAsARGB;
- (_Bool)supportsHiddenParameters;
- (_Bool)supportsDisabledParameters;
- (_Bool)supportsGroupParameters;
- (_Bool)notifiesParameterChangedForGenerators;
- (_Bool)parameterChangedUsableForAllParameters;
- (_Bool)supportsTemporalBitmaps;
- (unsigned long long)timeBase;
- (id)glContextPixelFormatAttributes;

@end
