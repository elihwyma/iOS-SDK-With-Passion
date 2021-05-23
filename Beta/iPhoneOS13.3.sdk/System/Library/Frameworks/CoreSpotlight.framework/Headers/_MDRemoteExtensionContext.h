/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/_MDExtensionContext.h>

@class CSIndexExtensionRequestHandler, NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext

{
    CSIndexExtensionRequestHandler *_requestHandler;
}

@property (retain, nonatomic) CSIndexExtensionRequestHandler *requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)hostContext;
- (void)getLastUpdateTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;

@end
