/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrum : NSObject

{
    long long _streamToken;
    struct _VCAudioPowerSpectrumRealtimeContext _realtimeContext;
}

@property (nonatomic, readonly) struct _VCRange frequencyRange;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *realtimeContext;

- (void)dealloc;
- (id)initWithBinCount:(unsigned int)arg1 streamToken:(long long)arg2 sinkContext:(void *)arg3 sinkCallback:(CDUnknownFunctionPointerType)arg4;

@end
