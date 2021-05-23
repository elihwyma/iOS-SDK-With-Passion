/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PUPerspectiveTransformVideoCompositionInstruction : NSObject

{
    CDStruct_e83c9415 _timeRange;
    CDStruct_8e0628e6 _perspectiveTransform;
    struct CGAffineTransform _preferredTransform;
}

@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (nonatomic) CDStruct_8e0628e6 perspectiveTransform;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) _Bool containsTweening;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;

@end
