/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EKICSPreviewModel : NSObject

{
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    unsigned long long _options;
    unsigned long long _actionsState;
    _Bool _shouldUpdate;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned long long totalEventCount;
@property (nonatomic, readonly) unsigned long long importedEventCount;
@property (nonatomic, readonly) unsigned long long unimportedEventCount;
@property (nonatomic, readonly) unsigned long long actionsState;
@property (nonatomic, readonly) NSArray *importedEvents;
@property (nonatomic, readonly) NSArray *unimportedEvents;
@property (nonatomic, readonly) NSArray *allEvents;
@property (nonatomic, readonly) _Bool shouldUpdate;

- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (id)importAllIntoCalendar:(id)arg1;

@end
