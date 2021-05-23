/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWStillImageProcessorController : NSObject

@property (nonatomic, readonly) unsigned long long type;

- (id)initWithConfiguration:(id)arg1;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;

@end
