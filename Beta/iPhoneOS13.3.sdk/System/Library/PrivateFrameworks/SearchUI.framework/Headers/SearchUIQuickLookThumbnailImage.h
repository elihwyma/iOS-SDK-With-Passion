/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIImage.h>

@class NSURL, QLThumbnailGenerationRequest;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

{
    NSURL *_url;
    QLThumbnailGenerationRequest *_request;
}

@property (retain, nonatomic) NSURL *url;
@property (weak) QLThumbnailGenerationRequest *request;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (Class)classForCoder;
- (id)initWithURL:(id)arg1;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
