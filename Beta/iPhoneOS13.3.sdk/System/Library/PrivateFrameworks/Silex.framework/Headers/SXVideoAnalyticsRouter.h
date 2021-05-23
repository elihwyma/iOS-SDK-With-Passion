/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXVideoAnalyticsRouter : NSObject

{
    _Bool _hasReroutedInitiatedPlaybackEvent;
    unsigned long long _currentPlaybackLocation;
    unsigned long long _initiatedPlaybackLocation;
    NSMutableDictionary *_reporters;
}

@property (nonatomic, readonly) unsigned long long initiatedPlaybackLocation;
@property (nonatomic, readonly) NSMutableDictionary *reporters;
@property (nonatomic) _Bool hasReroutedInitiatedPlaybackEvent;
@property (nonatomic) unsigned long long currentPlaybackLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reportEvent:(id)arg1;
- (void)setAnalyticsReporter:(id)arg1 forPlaybackLocation:(unsigned long long)arg2;
- (id)analyticsReporterForEvent:(id)arg1;
- (id)reporterForPlaybackLocation:(unsigned long long)arg1;
- (id)initWithInitiatedPlaybackLocation:(unsigned long long)arg1 analyticsReporter:(id)arg2;

@end
