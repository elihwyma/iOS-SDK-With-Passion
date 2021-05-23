/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

{
    PLDuetServiceLpmSource *_lpmSource;
    PLDuetServiceDAS *_dasEvent;
    PLDuetServiceImpl *_impl;
}

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)aggregateNameDuetEnergyAccumulator;

- (id)init;
- (void)dealloc;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;

@end
