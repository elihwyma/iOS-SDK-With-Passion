/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TDreamFramebuffer;

@interface TDreamFramebufferManager : NSObject

{
    id memoryWarningObserver;
    NSMutableArray *framebufferArrayLarge;
    NSMutableArray *framebufferArraySmall;
    NSString *actualLookUp;
    NSString *actualPalette;
    struct CGSize smallUseSize;
    struct CGSize largeUseSize;
    TDreamFramebuffer *_outputBufferAndTexture;
    TDreamFramebuffer *_lookUpBuffer;
}

@property (retain, nonatomic) TDreamFramebuffer *outputBufferAndTexture;
@property (retain, nonatomic) TDreamFramebuffer *lookUpBuffer;

- (id)init;
- (void)dealloc;
- (_Bool)lookupFailedToLoad;
- (void)deleteLargeFramebuffers;
- (void)deleteSmallFramebuffers;
- (void)deleteAllFramebuffers;
- (void)newLookUp:(id)arg1;
- (unsigned int)getOutputBufferNameWithIPImage:(struct IPImage)arg1;
- (void)addImageBufferToArray:(int)arg1 ipImage:(struct IPImage)arg2;
- (unsigned int)getTextureNameFromArray:(int)arg1;
- (unsigned int)getBufferFromArray:(int)arg1 withSize:(struct CGSize)arg2;
- (void)clearFrameBuffers;
- (unsigned int)getOutputBufferNamer;

@end
