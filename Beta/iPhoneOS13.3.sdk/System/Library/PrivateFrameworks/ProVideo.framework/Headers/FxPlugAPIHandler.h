/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FxPlugAPIDelegate;

@interface FxPlugAPIHandler : NSObject

{
    NSObject<FxPlugAPIDelegate> *_delegate;
}

@property (nonatomic) NSObject<FxPlugAPIDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void *)allocateMemory:(unsigned long long)arg1 clear:(_Bool)arg2 clearWith:(unsigned char)arg3 error:(id *)arg4;
- (void)freeMemory:(void *)arg1 error:(id *)arg2;
- (void)trackExternalAllocation:(unsigned long long)arg1;
- (void)createTexture:(id *)arg1 withDOD:(struct FxRect)arg2 GLTarget:(unsigned int)arg3 level:(int)arg4 internalFormat:(unsigned int)arg5 width:(int)arg6 height:(int)arg7 border:(int)arg8 format:(unsigned int)arg9 type:(unsigned int)arg10 pixels:(const void *)arg11 origin:(unsigned long long)arg12 pixelAspectRatio:(double)arg13 andError:(id *)arg14;
- (void)deleteTexture:(id)arg1 error:(id *)arg2;
- (void)createPBuffer:(unsigned int *)arg1 withTarget:(unsigned int)arg2 error:(id *)arg3;
- (void)deletePBuffer:(unsigned int)arg1 error:(id *)arg2;
- (unsigned long long)numberOfCores;
- (void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThreads:(long long)arg4 waitUntilDone:(_Bool)arg5 error:(id *)arg6;
- (id)errorWithString:(id)arg1 andCode:(long long)arg2;
- (void)runFxPlugThread:(id)arg1;

@end
