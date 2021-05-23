/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol TIAnalyticsServiceProvider;

@interface TIAnalyticsService : NSObject

{
    NSMutableDictionary *_eventSpecs;
    id <TIAnalyticsServiceProvider> _provider;
}

@property (nonatomic, readonly) NSMutableDictionary *eventSpecs;
@property (nonatomic, readonly) id <TIAnalyticsServiceProvider> provider;

+ (id)sharedInstance;
+ (void)setMockInstance:(id)arg1;

- (id)init;
- (_Bool)registerEventSpec:(id)arg1 error:(id *)arg2;
- (_Bool)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id *)arg4;
- (id)initWithProvider:(id)arg1;
- (void)registerEventSpec:(id)arg1;
- (_Bool)isEventSpecRegisteredWithName:(id)arg1;
- (id)eventSpecFromName:(id)arg1;
- (void)dispatchEventWithName:(id)arg1;
- (void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3;
- (_Bool)dispatchEventWithName:(id)arg1 error:(id *)arg2;
- (_Bool)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id *)arg3;
- (_Bool)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (_Bool)_dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id *)arg4;
- (void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3;
- (id)settingsFromEventSpec:(id)arg1 values:(id)arg2 errors:(id)arg3;
- (id)settingsFromEventSpec:(id)arg1 inputMode:(id)arg2 errors:(id)arg3;
- (void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)logDispatchErrorsForEventWithName:(id)arg1 errors:(id)arg2;
- (void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;

@end
