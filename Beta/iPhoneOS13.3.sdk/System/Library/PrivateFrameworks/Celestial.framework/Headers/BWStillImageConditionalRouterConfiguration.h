/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWStillImageConditionalRouterConfiguration : NSObject

{
    unsigned int _numberOfOutputs;
    CDUnknownBlockType _shouldEmitSampleBufferDecisionProvider;
    unsigned int _numberOfInputs;
}

@property (nonatomic, readonly) unsigned int numberOfInputs;
@property (nonatomic, readonly) unsigned int numberOfOutputs;
@property (copy, nonatomic) CDUnknownBlockType shouldEmitSampleBufferDecisionProvider;

- (void)dealloc;
- (id)initWithNumberOfOutputs:(unsigned int)arg1;

@end
