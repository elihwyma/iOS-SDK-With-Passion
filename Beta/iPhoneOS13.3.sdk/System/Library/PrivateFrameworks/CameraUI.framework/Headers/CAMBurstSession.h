/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject

{
    _Bool _finalized;
    unsigned long long _estimatedCount;
    unsigned long long _count;
    CIBurstImageSet *__burstImageSet;
}

@property (nonatomic, setter=_setEstimatedCount:) unsigned long long estimatedCount;
@property (nonatomic, setter=_setCount:) unsigned long long count;
@property (nonatomic, getter=_isFinalized, setter=_setFinalized:) _Bool finalized;
@property (nonatomic, readonly) CIBurstImageSet *_burstImageSet;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)init;
- (id)description;
- (id)performBurstAnalysisForDevice:(long long)arg1;
- (void)addStillImageCaptureResult:(id)arg1;
- (void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2;

@end
