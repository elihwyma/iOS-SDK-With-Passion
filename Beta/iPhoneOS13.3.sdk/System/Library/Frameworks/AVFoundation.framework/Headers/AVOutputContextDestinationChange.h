/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContextDestinationChangeInternal, NSString;

@interface AVOutputContextDestinationChange : NSObject

{
    AVOutputContextDestinationChangeInternal *_ivars;
}

@property (readonly) long long status;
@property (readonly) NSString *cancellationReason;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)markAsFinished;
- (void)_setStatus:(long long)arg1 cancellationReason:(id)arg2;
- (void)markAsInProgress;
- (void)markAsFailed;
- (void)markAsCancelledWithReason:(id)arg1;
- (void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(struct __CFString *)arg1;
- (void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(struct __CFString *)arg1;

@end
