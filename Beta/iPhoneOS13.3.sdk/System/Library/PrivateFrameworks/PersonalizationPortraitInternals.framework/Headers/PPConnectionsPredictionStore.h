/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPConnectionsCalendarSource, PPConnectionsDuetSource, PPConnectionsFoundInAppsSource, PPConnectionsMetricsTracker, PPConnectionsNamedEntitySource, PPConnectionsParameters, PPConnectionsPasteboardSource;

@interface PPConnectionsPredictionStore : NSObject

{
    PPConnectionsParameters *_parameters;
    PPConnectionsPasteboardSource *_pasteboardSource;
    PPConnectionsCalendarSource *_calendarSource;
    PPConnectionsDuetSource *_duetSource;
    PPConnectionsNamedEntitySource *_namedEntitySource;
    PPConnectionsFoundInAppsSource *_fiaSource;
    PPConnectionsMetricsTracker *_metricsTracker;
    NSString *_identifier;
}

+ (id)defaultStore;

- (id)init;
- (id)parameters;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2 pasteboardSource:(id)arg3 calendarSource:(id)arg4 duetSource:(id)arg5 namedEntitySource:(id)arg6 fiaSource:(id)arg7 metricsTracker:(id)arg8;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id *)arg6;
- (id)pasteboardSource;
- (id)duetSource;
- (id)calendarSource;
- (id)cutoffActivityTime;
- (id)cutoffNamedEntityTime;
- (id)cutoffLocationAppLastUseTime;
- (id)cutoffPasteboardItemTime;
- (id)cutoffLinguisticTriggerTime;
- (id)cutoffCalendarEventTime;

@end
