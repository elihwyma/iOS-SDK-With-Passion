/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol INIntentResponseObserver;

__attribute__((visibility("hidden")))
@interface INExtensionContextGetRideStatusIntentResponseObserver : NSObject

{
    id <INIntentResponseObserver> _remoteObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)getRideStatusResponseDidUpdate:(id)arg1;
- (id)initWithRemoteObserver:(id)arg1;

@end
