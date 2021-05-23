/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CHHapticEvent : NSObject

{
    NSString *_type;
    unsigned long long _audioResID;
    NSArray *_eventParams;
    double _time;
    double _duration;
}

@property (readonly) unsigned long long audioResID;
@property (readonly) double fullDuration;
@property (readonly) NSString *type;
@property (readonly) NSArray *eventParameters;
@property double relativeTime;
@property double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *events;
@property (readonly) NSArray *parameters;
@property (readonly) NSArray *parameterCurves;

+ (_Bool)parameterValuesFromLegacyEventType:(unsigned long long)arg1 sharpness:(float *)arg2 fullness:(float *)arg3 error:(id *)arg4;

- (id)init;
- (id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3;
- (id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3;
- (id)getType;
- (id)initWithAudioResourceIndex:(unsigned long long)arg1 parameters:(id)arg2 time:(double)arg3;
- (id)initWithEventType:(id)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4;
- (_Bool)resolveExternalResources:(id)arg1 error:(id *)arg2;
- (id)initWithAudioResourceID:(unsigned long long)arg1 parameters:(id)arg2 relativeTime:(double)arg3 duration:(double)arg4;

@end
