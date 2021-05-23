/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUColorSpace, NUPixelFormat;

@protocol NUDisplay <Swift>

@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (readonly) NUPixelFormat *pixelFormat;
@property (readonly) NUColorSpace *colorSpace;

@end
