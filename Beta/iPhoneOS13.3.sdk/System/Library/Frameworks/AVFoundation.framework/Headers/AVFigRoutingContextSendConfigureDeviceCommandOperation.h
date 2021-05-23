/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOperation.h>

@protocol AVOutputDeviceConfigurationRetrieval;

__attribute__((visibility("hidden")))
@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation

{
    struct OpaqueFigRoutingContext *_routingContext;
    CDUnknownBlockType _configuratorBlock;
    id <AVOutputDeviceConfigurationRetrieval> _finalConfiguration;
}

@property (retain, nonatomic) id <AVOutputDeviceConfigurationRetrieval> finalConfiguration;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1 configuratorBlock:(CDUnknownBlockType)arg2;

@end
