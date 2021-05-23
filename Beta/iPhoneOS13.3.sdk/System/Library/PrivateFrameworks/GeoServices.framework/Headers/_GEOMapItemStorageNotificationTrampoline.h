/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemStorage;

@protocol GEOMapItem, NSObject;

__attribute__((visibility("hidden")))
@interface _GEOMapItemStorageNotificationTrampoline : NSObject

{
    id <GEOMapItem> _mapItem;
    GEOMapItemStorage *_storage;
    id <NSObject> _notificationToken;
}

- (void)dealloc;
- (id)initWithMapItem:(id)arg1 mapItemStorage:(id)arg2;

@end
