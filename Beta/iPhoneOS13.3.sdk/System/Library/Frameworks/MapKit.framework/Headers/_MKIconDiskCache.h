/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MKIconDiskCache : NSObject

{
    NSURL *_directoryURL;
    NSObject<OS_dispatch_queue> *_storingQueue;
    NSLock *_lock;
    NSMutableArray *_inProgressUUIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(_Bool)arg4 isTransit:(_Bool)arg5 isTransparent:(_Bool)arg6 isNightMode:(_Bool)arg7 drawingBlock:(CDUnknownBlockType)arg8;
- (void)_updateVersionsInfo;
- (id)initWithDirectoryURL:(id)arg1;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(CDUnknownBlockType)arg4;

@end
