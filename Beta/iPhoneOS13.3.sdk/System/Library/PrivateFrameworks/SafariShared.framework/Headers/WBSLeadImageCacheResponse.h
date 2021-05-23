/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSSiteMetadataResponse.h>

@class UIImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse

{
    UIImage *_thumbnail;
}

@property (nonatomic, readonly) UIImage *thumbnail;

+ (id)responseWithURL:(id)arg1 thumbnail:(id)arg2;

- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 thumbnail:(id)arg2;

@end
