/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFAnalyticsObserverConnection, NSSet, NSString;

@interface AFInstrumentationObserverConnection : NSObject

{
    AFAnalyticsObserverConnection *_observerConnection;
    NSSet *_filteredTagIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithObservation:(CDUnknownBlockType)arg1 filterByInstrumentationTypes:(id)arg2;
- (id)initWithObservation:(CDUnknownBlockType)arg1;
- (void)waitUntilInvalidated;

@end
