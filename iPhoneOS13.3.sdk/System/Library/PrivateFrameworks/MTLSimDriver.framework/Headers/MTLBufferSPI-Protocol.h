//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLBuffer-Protocol.h>

@class MTLTextureDescriptor;
@protocol MTLTexture;

@protocol MTLBufferSPI <MTLBuffer>
@property(readonly) struct __IOSurface iosurface;
- (id <MTLTexture>)newLinearTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 bytesPerImage:(NSUInteger)arg4;
- (void)didModifyRange:(NSRange)arg1;

@optional
@property(nonatomic) NSUInteger resourceIndex;
@end
