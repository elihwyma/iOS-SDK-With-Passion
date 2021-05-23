/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface CAWindowServerDisplay : NSObject

{
    struct CAWindowServerDisplayImpl *_impl;
    _Bool _mirroringEnabled;
}

@property (readonly) struct CGRect bounds;
@property double scale;
@property (readonly) NSString *name;
@property (readonly) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (readonly) NSString *uniqueId;
@property (readonly) unsigned int rendererFlags;
@property (readonly) NSSet *clones;
@property (readonly) CAWindowServerDisplay *cloneMaster;
@property (getter=isBlanked) _Bool blanked;
@property (getter=isFlipBookEnabled) _Bool flipBookEnabled;
@property (copy) NSString *orientation;
@property double overscanAmount;
@property struct CGSize overscanAmounts;
@property _Bool invertsColors;
@property _Bool allowsExtendedDynamicRange;
@property (getter=isGrayscale) _Bool grayscale;
@property float contrast;
@property float maximumBrightness;
@property (readonly) float maximumLuminance;
@property float nits;
@property float idealRefreshRate;
@property _Bool usesPreferredModeRefreshRate;
@property (copy, nonatomic) NSString *colorMode;
@property _Bool allowsVirtualModes;
@property (getter=isMirroringEnabled) _Bool mirroringEnabled;
@property (readonly) _Bool supportsExtendedColors;
@property long long tag;
@property int processId;
@property (copy) NSString *TVMode;
@property (copy) NSString *TVSignalType;
@property (getter=isSecure) _Bool secure;
@property _Bool allowsDisplayCompositing;
@property _Bool disablesUpdates;
@property _Bool disabled;
@property (readonly) CDStruct_b2fbf00d whitepoint;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)freeze;
- (void)update;
- (float)maximumRefreshRate;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (unsigned int)taskNamePortOfContextId:(unsigned int)arg1;
- (id)_initWithCADisplayServer:(struct Server *)arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint)arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint)arg1 excludingContextIds:(id)arg2;
- (unsigned int)clientPortAtPosition:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2;
- (void)addClone:(id)arg1 options:(id)arg2;
- (void)addClone:(id)arg1;
- (void)removeClone:(id)arg1;
- (void)removeAllClones;
- (void)willUnblank;
- (void)setCalibrationPhase:(unsigned int)arg1 forIdentifier:(unsigned int)arg2;
- (void)setColorMatrix:(float *)arg1 scale:(float)arg2 rampDuration:(double)arg3;
- (void)setAccessibilityColorMatrix:(float *)arg1 scale:(float)arg2;
- (void)setMinimumRefreshRate:(float)arg1;
- (float)minimumRefreshRate;
- (void)setMaximumRefreshRate:(float)arg1;

@end
