/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class IOSurface, NSString, _FBSSnapshotContext;

@interface _FBSSnapshot : NSObject

{
    _FBSSnapshotContext *_context;
    struct CGImage *_imageRef;
    IOSurface *_nonProtectedSurfaceRef;
    IOSurface *_protectedSurfaceRef;
}

@property (copy, nonatomic, readonly) _FBSSnapshotContext *context;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly) IOSurface *fallbackIOSurface;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (double)_scale;
- (void)_doInvalidate;
- (void)_synchronizedCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_scaledSnapshotSize;
- (id)initWithSnapshotContext:(id)arg1;
- (_Bool)capture;

@end
