/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray;

@protocol MTLCommandQueue;

@interface BWStillImageProcessorConfiguration : NSObject

{
    NSArray *_sensorConfigurations;
    _Bool _deferredProcessingEnabled;
    id <MTLCommandQueue> _metalCommandQueue;
}

@property (retain, nonatomic) NSArray *sensorConfigurations;
@property (nonatomic) _Bool deferredProcessingEnabled;
@property (retain, nonatomic) id <MTLCommandQueue> metalCommandQueue;

- (void)dealloc;

@end
