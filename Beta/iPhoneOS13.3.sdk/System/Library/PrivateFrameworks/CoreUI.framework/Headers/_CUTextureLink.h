/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUINamedTexture, NSString;

@protocol TXRBufferAllocator;

__attribute__((visibility("hidden")))
@interface _CUTextureLink : NSObject

{
    CUINamedTexture *_namedTexture;
    id <TXRBufferAllocator> _bufferAllocator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)namedTexture;
- (id)provideTextureInfo;
- (id)bufferAllocator;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (void)setNamedTexture:(id)arg1;
- (void)setBufferAllocator:(id)arg1;

@end
