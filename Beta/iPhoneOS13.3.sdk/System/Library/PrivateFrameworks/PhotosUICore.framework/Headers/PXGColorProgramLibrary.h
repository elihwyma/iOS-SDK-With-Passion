/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol MTLDevice;

@interface PXGColorProgramLibrary : NSObject

{
    NSMutableArray *_programs;
    struct os_unfair_lock_s _lock;
    id <MTLDevice> _device;
    struct CGColorSpace *_destinationColorSpace;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) struct CGColorSpace *destinationColorSpace;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)arg1 destinationColorSpace:(struct CGColorSpace *)arg2;
- (id)colorProgramForSourceColorSpace:(struct CGColorSpace *)arg1 flags:(unsigned long long)arg2;

@end
