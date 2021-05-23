/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PASymbolHandle;

@interface PASymbolHandleWithKernelBool : NSObject

{
    _Bool _isKernel;
    PASymbolHandle *_symbolHandle;
}

@property (retain) PASymbolHandle *symbolHandle;
@property _Bool isKernel;

@end
