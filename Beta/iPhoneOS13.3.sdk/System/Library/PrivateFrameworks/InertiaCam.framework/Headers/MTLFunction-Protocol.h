/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <InertiaCam/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol MTLDevice;

@protocol MTLFunction <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *functionConstantsDictionary;

- (unsigned short)newArgumentEncoderWithBufferIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)newArgumentEncoderWithBufferIndex:reflection: /* Error: Ran out of types for this method. */;

@end
