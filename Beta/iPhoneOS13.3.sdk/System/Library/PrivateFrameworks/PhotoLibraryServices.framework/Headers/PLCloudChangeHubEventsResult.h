/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface PLCloudChangeHubEventsResult : NSObject

{
    NSObject<OS_xpc_object> *_events;
    long long _resultType;
    unsigned long long _changeHubEventIndex;
}

@property (readonly) long long resultType;
@property (readonly) unsigned long long changeHubEventIndex;
@property (copy, readonly) NSString *currentTokenDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)enumerateLocalEventsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)initWithSuccesfulEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)initWithResultType:(long long)arg1 events:(id)arg2 changeHubEventIndex:(unsigned long long)arg3;
- (id)localEventFromEvent:(id)arg1;

@end
