/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLTexture.h>

@class NSURL;

@interface MDLURLTexture : MDLTexture

{
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)arg1 name:(id)arg2;

@end
