/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CADisplayAttributes, CADisplayMode, CADisplayPreferences, NSArray, NSString;

@interface CADisplay : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) NSArray *availableModes;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (nonatomic, readonly) CADisplayMode *preferredMode;
@property (copy, nonatomic) NSString *colorMode;
@property _Bool allowsVirtualModes;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) struct CGRect safeBounds;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) unsigned int displayId;
@property (nonatomic, readonly) unsigned int seed;
@property (nonatomic, readonly) unsigned int connectionSeed;
@property (nonatomic, readonly) NSString *uniqueId;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, readonly, getter=isSupported) _Bool supported;
@property (nonatomic, readonly) long long tag;
@property (nonatomic, readonly) int processId;
@property (nonatomic, readonly, getter=isExternal) _Bool external;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) double heartbeatRate;
@property (nonatomic, readonly) long long minimumFrameDuration;
@property (nonatomic, readonly, getter=isOverscanned) _Bool overscanned;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (nonatomic, readonly) double overscanAmount;
@property (nonatomic, readonly) struct CGSize overscanAmounts;
@property (nonatomic, readonly, getter=isCloned) _Bool cloned;
@property (nonatomic, readonly, getter=isCloningSupported) _Bool cloningSupported;
@property (nonatomic, readonly) NSString *nativeOrientation;
@property (nonatomic, readonly) NSString *currentOrientation;
@property (nonatomic, readonly) unsigned int odLUTVersion;
@property (nonatomic, readonly) _Bool supportsExtendedColors;
@property (nonatomic, readonly) CADisplayAttributes *externalDisplayAttributes;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic) double latency;
@property (copy, nonatomic) CADisplayPreferences *preferences;
@property (nonatomic, readonly) NSString *productName;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)mainDisplay;
+ (id)displays;
+ (id)TVOutDisplay;

- (void)dealloc;
- (id)description;
- (void)_invalidate;
- (void)update;
- (id)immutableCopy;
- (id)_initWithDisplay:(struct Display *)arg1;
- (_Bool)setDisplayProperties:(id)arg1;
- (id)preferredModeWithCriteria:(id)arg1;
- (id)supportedHDRModes;
- (id)preferredHDRModes;
- (id)allowedHDRModes;
- (void)overrideDisplayTimings:(id)arg1;

@end
