/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSceneSnapshot, IOSurface, NSString, SBFallbackSnapshotDataProvider, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBSceneSnapshotDataProvider : NSObject

{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    UIImage *_cachedImage;
    SBFallbackSnapshotDataProvider *_fallbackSnapshotDataProvider;
    IOSurface *_processedSurface;
    _Bool _hasProtectedContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) XBSnapshotDataProviderContext *context;

- (id)IOSurface;
- (_Bool)hasProtectedContent;
- (id)fetchImage;
- (id)fallbackSnapshotDataProvider;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;
- (void)_invalidateSnapshotData;

@end
