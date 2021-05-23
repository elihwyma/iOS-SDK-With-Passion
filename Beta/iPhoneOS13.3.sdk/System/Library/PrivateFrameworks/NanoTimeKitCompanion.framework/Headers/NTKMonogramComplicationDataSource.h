/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NSString, NTKMonogramTimelineEntryModel;

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource

{
    NTKMonogramTimelineEntryModel *_currentEntry;
    NSString *_monogramText;
    _Bool _listeningForMonogramNotifications;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)startListeningForMonogramNotifications;
- (void)stopListeningForMonogramNotifications;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (id)_currentTimelineEntry;

@end
