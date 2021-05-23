/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLAttachment.h>

@interface SLURLAttachment : SLAttachment

{
    long long _urlType;
}

- (long long)urlType;
- (id)initWithURL:(id)arg1 ofType:(long long)arg2 preview:(id)arg3;
- (id)initWithURL:(id)arg1 previewImage:(id)arg2;

@end
