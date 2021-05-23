/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@class BWIrisMovieInfo;

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage

{
    BWIrisMovieInfo *_irisMovieInfo;
}

@property (readonly) BWIrisMovieInfo *irisMovieInfo;

+ (id)newMessageWithIrisMovieInfo:(id)arg1;

- (void)dealloc;
- (id)_initWithIrisMovieInfo:(id)arg1;

@end
