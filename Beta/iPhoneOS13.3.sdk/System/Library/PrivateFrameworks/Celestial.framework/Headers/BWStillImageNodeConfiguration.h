/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol MTLCommandQueue;

@interface BWStillImageNodeConfiguration : NSObject

{
    id <MTLCommandQueue> _metalCommandQueue;
}

@property (retain, nonatomic) id <MTLCommandQueue> metalCommandQueue;

- (void)dealloc;

@end
