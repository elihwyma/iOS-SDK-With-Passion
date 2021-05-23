/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class NSArray, NSSet, NSString, PLEntryNotificationOperatorComposition;

@interface PLAirplayService : PLService

{
    _Bool _airplayMirroringOn;
    PLEntryNotificationOperatorComposition *_screenstateCallback;
    PLEntryNotificationOperatorComposition *_audioAppCallback;
    NSArray *_screenLayoutEntries;
    NSString *_entryKeyPLScreenStateAgentScreenState;
    NSSet *_excludedAccountingEvents;
}

@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback;
@property (retain) PLEntryNotificationOperatorComposition *audioAppCallback;
@property (retain) NSArray *screenLayoutEntries;
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState;
@property _Bool airplayMirroringOn;
@property (retain) NSSet *excludedAccountingEvents;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;

- (id)init;
- (id)buildCallBack:(id)arg1 withGroup:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)handleScreenStateCallback:(id)arg1;
- (void)testService;
- (void)initOperatorDependancies;
- (void)handleAudioAppCallback:(id)arg1;

@end
