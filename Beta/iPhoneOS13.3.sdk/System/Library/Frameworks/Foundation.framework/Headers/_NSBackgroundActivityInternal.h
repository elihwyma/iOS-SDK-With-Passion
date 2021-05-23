/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _NSBackgroundActivityInternal : NSObject

{
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    CDUnknownBlockType _activity;
    CDUnknownBlockType _checkInHandler;
    _Bool _repeats;
    _Bool _preregistered;
    _Bool _appRefresh;
    NSObject<OS_xpc_object> *_additionalProperties;
    long long _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
}

@property (copy) NSString *identifier;
@property long long qualityOfService;
@property _Bool repeats;
@property double interval;
@property double tolerance;
@property double delay;
@property (copy) CDUnknownBlockType activity;
@property _Bool preregistered;
@property (copy) CDUnknownBlockType checkInHandler;
@property (getter=isAppRefresh) _Bool appRefresh;

- (id)init;
- (void)dealloc;
- (id)currentActivity;
- (void)setCurrentActivity:(id)arg1;
- (id)additionalProperties;
- (void)setAdditionalProperties:(id)arg1;

@end
