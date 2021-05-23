/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VNTracker : NSObject

{
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> mTrackerImpl;
    unsigned long long _requestRevision;
    unsigned int _trackedFrameCVPixelBufferFormat;
    long long _trackedFrameNumber;
    NSUUID *_key;
    NSString *_level;
    struct CGRect _lastTrackedBBox;
}

@property (readonly) _Bool isTracking;
@property long long trackedFrameNumber;
@property struct CGRect lastTrackedBBox;
@property (readonly) NSUUID *key;
@property (readonly) NSString *level;
@property unsigned int trackedFrameCVPixelBufferFormat;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (long long)VNTrackerOptionToTrackerType:(id)arg1;

- (id).cxx_construct;
- (_Bool)reset:(id *)arg1;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (id)trackInFrame:(id)arg1 error:(id *)arg2;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;
- (struct ObjectTrackerAbstract *)_createTrackerWithLevel:(id)arg1 options:(struct ObjectTrackerOptions *)arg2 error:(id *)arg3;
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id *)arg3;
- (_Bool)_visionBBoxToTrackerBBox:(id)arg1 trackedObjects:(vector_41a7cb1a *)arg2 imageSize:(struct CGSize)arg3 results:(id)arg4 error:(id *)arg5;
- (_Bool)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg1 error:(id *)arg2;

@end
