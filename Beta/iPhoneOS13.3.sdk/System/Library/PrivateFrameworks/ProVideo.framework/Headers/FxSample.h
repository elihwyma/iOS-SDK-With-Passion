/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxSample : NSObject

{
    struct FxSamplePriv *_priv;
}

+ (id)_requiredSamplesForSamples:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)context;
- (double)time;
- (void)setContext:(id)arg1;
- (void)setTime:(double)arg1;
- (id)stream;
- (void)setStream:(id)arg1;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)arg1;
- (unsigned long long)fieldOrder;
- (id)evaluateWithOptions:(id)arg1;
- (id)domainOfDefinition;
- (_Bool)supportsContextType:(int)arg1;
- (_Bool)isPredetermined;
- (id)requiredSamples;

@end
