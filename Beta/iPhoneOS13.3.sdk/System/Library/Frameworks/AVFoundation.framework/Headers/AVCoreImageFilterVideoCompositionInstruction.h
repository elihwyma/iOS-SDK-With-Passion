/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVCoreImageFilterVideoCompositionInstruction : NSObject

{
    CDStruct_e83c9415 _timeRange;
    NSArray *_requiredSourceTrackIDs;
    CDUnknownBlockType _handler;
    struct CGAffineTransform _sourceTrackPreferredTransform;
}

@property (nonatomic, readonly) CDUnknownBlockType handler;
@property (nonatomic) struct CGAffineTransform sourceTrackPreferredTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) _Bool containsTweening;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;

- (id)init;
- (void)dealloc;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 sourceTrackIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
