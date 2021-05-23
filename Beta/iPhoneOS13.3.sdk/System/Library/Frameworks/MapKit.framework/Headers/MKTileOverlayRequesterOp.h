/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKTileOverlayRequester, NSData;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKTileOverlayRequesterOp : NSObject

{
    struct _GEOTileKey _key;
    MKTileOverlayRequester *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSData *_data;
}

@property (nonatomic) struct _GEOTileKey key;
@property (weak, nonatomic) MKTileOverlayRequester *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSData *data;

- (void)cancel;
- (void)start;

@end
