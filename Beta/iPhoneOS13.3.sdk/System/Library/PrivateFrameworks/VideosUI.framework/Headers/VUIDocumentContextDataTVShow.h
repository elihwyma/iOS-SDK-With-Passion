/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData

{
    NSString *_showID;
    NSString *_episodeID;
}

@property (copy, nonatomic, readonly) NSString *showID;
@property (copy, nonatomic, readonly) NSString *episodeID;

- (id)jsonData;
- (id)initWithShowID:(id)arg1 episodeID:(id)arg2;

@end
