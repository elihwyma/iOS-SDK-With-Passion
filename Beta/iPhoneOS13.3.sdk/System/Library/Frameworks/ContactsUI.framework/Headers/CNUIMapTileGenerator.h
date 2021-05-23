/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNUIMapTileGenerator : NSObject

{
    CDUnknownBlockType _geocoderProvider;
    CDUnknownBlockType _snapshotterProvider;
    id <CNScheduler> _workQueue;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType geocoderProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType snapshotterProvider;
@property (copy, nonatomic, readonly) id <CNScheduler> workQueue;
@property (copy, nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;

+ (id)defaultImage;
+ (id)mapTileImagesForPlacemark:(id)arg1 snapshotterProvider:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
+ (id)placemarkForAddress:(id)arg1 geocoderProvider:(CDUnknownBlockType)arg2 scheduler:(id)arg3;

- (id)init;
- (id)initWithGeocoderProvider:(CDUnknownBlockType)arg1 snapshotterProvider:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
- (id)tilesForAddress:(id)arg1;

@end
