/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class NSDictionary;

@protocol MTConfigDelegate;

@interface MTConfig : MTObject

{
    id <MTConfigDelegate> _delegate;
    long long _eventDataTimeout;
    NSDictionary *_debugSource;
}

@property (retain, nonatomic) NSDictionary *debugSource;
@property (weak, nonatomic) id <MTConfigDelegate> delegate;
@property (nonatomic) long long eventDataTimeout;

- (id)sources;
- (_Bool)_isEventDataTimeoutUnset;
- (id)configValueForKeyPath:(id)arg1 sources:(id)arg2;
- (_Bool)disabledForSources:(id)arg1;
- (id)blacklistedEventsForSources:(id)arg1;
- (id)blacklistedFieldsForSources:(id)arg1;
- (id)deResFieldsForSources:(id)arg1;
- (_Bool)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2;
- (void)removeBlacklistedFields:(id)arg1 sources:(id)arg2;
- (void)applyDeRes:(id)arg1 sources:(id)arg2;
- (id)computeWithConfigSources:(CDUnknownBlockType)arg1;
- (id)configValueForKeyPath:(id)arg1 default:(id)arg2;

@end
