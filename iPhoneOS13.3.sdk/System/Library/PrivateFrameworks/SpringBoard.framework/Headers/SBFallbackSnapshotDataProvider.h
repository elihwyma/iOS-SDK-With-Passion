//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/XBSnapshotDataProvider-Protocol.h>

@class FBSceneSnapshot, IOSurface, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBFallbackSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    UIImage *_cachedImage;
    IOSurface *_processedSurface;
}

@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)_invalidateSnapshotData;
- (id)fetchImage;
- (id)IOSurface;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;

@end

