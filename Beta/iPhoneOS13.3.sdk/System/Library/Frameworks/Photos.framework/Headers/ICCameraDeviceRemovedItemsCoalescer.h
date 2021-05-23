/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, PHImportDeviceSource;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    NSMutableArray *_items;
    PHImportDeviceSource *_source;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *lastNotify;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) PHImportDeviceSource *source;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType block;

- (id)initWithDevice:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)coalesceItems:(id)arg1;

@end
