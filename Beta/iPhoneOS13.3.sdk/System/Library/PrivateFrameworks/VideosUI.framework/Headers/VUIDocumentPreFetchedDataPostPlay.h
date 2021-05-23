/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentPreFetchedData.h>

@class NSArray, NSString;

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData

{
    _Bool _updateEvent;
    _Bool _canAutoPlay;
    NSString *_host;
    NSString *_productID;
    NSString *_showID;
    NSArray *_excludedCanonicals;
}

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *showID;
@property (copy, nonatomic) NSArray *excludedCanonicals;
@property (nonatomic) _Bool updateEvent;
@property (nonatomic) _Bool canAutoPlay;

- (id)jsonData;

@end
