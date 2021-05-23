/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface BYXPCActivityRegistrar : NSObject

+ (id)sharedInstance;

- (void)registerActivityWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)unregisterActivityWithIdentifier:(const char *)arg1;

@end
