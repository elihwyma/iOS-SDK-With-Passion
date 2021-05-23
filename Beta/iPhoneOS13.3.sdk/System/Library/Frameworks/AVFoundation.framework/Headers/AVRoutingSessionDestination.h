/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject

{
    AVRoutingSessionDestinationInternal *_ivars;
}

@property (nonatomic, readonly) NSArray *outputDeviceDescriptions;
@property (nonatomic, readonly) float probability;
@property (nonatomic, readonly) _Bool providesExternalVideoPlayback;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSessionDestination:(const struct __CFDictionary *)arg1;
- (_Bool)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id *)arg1;

@end
