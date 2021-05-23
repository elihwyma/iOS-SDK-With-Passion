/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSceneSnapshot, IOSurface, NSString, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBFallbackSnapshotDataProvider : NSObject

{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    UIImage *_cachedImage;
    IOSurface *_processedSurface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) XBSnapshotDataProviderContext *context;

- (id)IOSurface;
- (id)fetchImage;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;
- (void)_invalidateSnapshotData;

@end
