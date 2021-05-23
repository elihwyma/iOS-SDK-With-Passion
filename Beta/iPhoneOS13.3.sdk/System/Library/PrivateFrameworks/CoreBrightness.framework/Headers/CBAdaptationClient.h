/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject

{
    BrightnessSystemClient *bsc;
    _Bool ownsClient;
    int _mode;
    _Bool _modeSet;
    _Bool _supported;
}

@property _Bool supported;

+ (_Bool)supportsAdaptation;

- (id)init;
- (void)dealloc;
- (_Bool)setEnabled:(_Bool)arg1;
- (id)initWithClientObj:(id)arg1;
- (_Bool)setWeakestAdaptationModeFromArray:(int *)arg1 withLength:(int)arg2 andPeriod:(float)arg3;
- (_Bool)getEnabled;
- (int)getAdaptationMode;
- (_Bool)animateFromWeakestAdaptationModeInArray:(int *)arg1 withLength:(int)arg2 toWeakestInArray:(int *)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;
- (_Bool)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;
- (_Bool)overrideStrengths:(float *)arg1 forModes:(int *)arg2 nModes:(int)arg3;
- (_Bool)getStrengths:(float *)arg1 nStrengths:(int)arg2;

@end
