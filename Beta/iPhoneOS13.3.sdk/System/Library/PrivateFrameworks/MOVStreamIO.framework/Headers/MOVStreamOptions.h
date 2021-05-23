/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@interface MOVStreamOptions : NSObject

{
    _Bool _debugMode;
}

@property (readonly) _Bool disableFrameReordering;
@property (readonly) double bitrateMultiplier;
@property (readonly) unsigned long long bitrateOverride;
@property (readonly) _Bool forceColorLossless;
@property (readonly) _Bool logAppendTimeStamps;
@property (readonly) _Bool force10bitMonoByVT;
@property (readonly) _Bool forceLossless8bitMonoByVT;
@property (readonly) _Bool logPrepareRecording;
@property (readonly) _Bool skipSourceHint;

+ (id)sharedOptions;

- (id)init;
- (id)localDefaults;
- (id)currentOptions;
- (void)registerStandardDefaults;
- (id)standardDefaultValues;
- (void)checkHasValue:(id)arg1 changedForKey:(id)arg2;

@end
