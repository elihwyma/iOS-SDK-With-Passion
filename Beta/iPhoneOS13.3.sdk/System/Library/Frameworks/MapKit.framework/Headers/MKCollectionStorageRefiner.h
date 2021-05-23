/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOURLCollectionStorage;

@interface MKCollectionStorageRefiner : NSObject

{
    struct os_unfair_lock_s _lock;
    GEOURLCollectionStorage *_collectionStorage;
}

- (void)_sharedInitWithCollectionStorage:(id)arg1;
- (void)fetchMapItems:(CDUnknownBlockType)arg1 traits:(id)arg2;
- (id)initWithCollectionURL:(id)arg1;
- (id)initWithCollectionStorage:(id)arg1;
- (void)fetchMapItems:(CDUnknownBlockType)arg1;

@end
