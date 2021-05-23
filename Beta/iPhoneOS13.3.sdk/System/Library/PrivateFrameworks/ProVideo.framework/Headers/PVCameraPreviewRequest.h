/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface PVCameraPreviewRequest : NSObject

{
    _Bool _mirrored;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    NSMutableArray *_effects;
    NSDictionary *_effectProperties;
    NSArray *_metadataObjects;
    CDStruct_1b6d18a9 _time;
}

@property (nonatomic) struct opaqueCMSampleBuffer *sampleBuffer;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) _Bool mirrored;
@property (retain, nonatomic) NSMutableArray *effects;
@property (copy, nonatomic) NSDictionary *effectProperties;
@property (copy, nonatomic) NSArray *metadataObjects;

- (oneway void)dealloc;

@end
