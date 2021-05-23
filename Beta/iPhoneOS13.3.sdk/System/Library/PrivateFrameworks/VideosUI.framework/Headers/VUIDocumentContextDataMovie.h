/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataMovie : VUIDocumentContextData

{
    NSString *_movieID;
}

@property (copy, nonatomic, readonly) NSString *movieID;

- (id)jsonData;
- (id)initWithMovieID:(id)arg1;

@end
