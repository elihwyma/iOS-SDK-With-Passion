/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapSnapshotRequest, NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject

{
    UIImage *_lastSnapshot;
    NSString *_lastAttributionString;
    NSLock *_requestLock;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
}

@property (retain, nonatomic) MKMapSnapshotRequest *servingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSharingThumbnails;

- (id)init;
- (void)dealloc;
- (void)_respondWithSnapshot;
- (void)_processRequest;
- (id)_newSnapshotWithView:(id)arg1;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 requester:(id)arg4 context:(id)arg5;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (void)flushRequestQueue;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 handler:(CDUnknownBlockType)arg4;

@end
