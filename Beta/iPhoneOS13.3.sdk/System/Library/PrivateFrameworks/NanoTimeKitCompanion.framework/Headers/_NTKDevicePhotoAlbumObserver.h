/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface _NTKDevicePhotoAlbumObserver : NSObject

{
    id _albumPreferenceObserver;
    NSHashTable *_observers;
}

@property (retain, nonatomic) id albumPreferenceObserver;
@property (retain, nonatomic) NSHashTable *observers;

- (id)init;

@end
