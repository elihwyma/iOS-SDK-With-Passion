/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class VNSequenceRequestHandler;

@interface BWVisionInferenceContext : NSObject

{
    VNSequenceRequestHandler *_sequenceRequestHandler;
}

@property (nonatomic, readonly) VNSequenceRequestHandler *sequenceRequestHandler;
@property (nonatomic, readonly, getter=isPrepared) _Bool prepared;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)prepareForInference;

@end
