/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PVRenderRequest : NSObject

{
    _Bool _highQuality;
    int _priority;
    int _gcdPriority;
    int _gpuPriority;
    unsigned int _parentCode;
    unsigned int _childCode;
    NSArray *_outputNodes;
    id _userContext;
    struct CGSize _outputSize;
    CDStruct_1b6d18a9 _time;
}

@property (nonatomic, readonly) NSArray *outputNodes;
@property (nonatomic, readonly) CDStruct_1b6d18a9 time;
@property (nonatomic, readonly) struct CGSize outputSize;
@property (nonatomic) int priority;
@property (nonatomic) int gcdPriority;
@property (nonatomic) int gpuPriority;
@property (nonatomic) _Bool highQuality;
@property (retain, nonatomic) id userContext;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic) unsigned int childCode;

- (id)initWithOutputs:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 outputSize:(struct CGSize)arg3;

@end
