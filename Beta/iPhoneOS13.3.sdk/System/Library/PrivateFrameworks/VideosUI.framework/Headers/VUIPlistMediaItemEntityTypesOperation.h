/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIMediaItemEntityTypesFetchResponse, VUIPlistMediaDatabase;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation

{
    VUIMediaItemEntityTypesFetchResponse *_response;
    NSError *_error;
    VUIPlistMediaDatabase *_database;
}

@property (retain, nonatomic) VUIPlistMediaDatabase *database;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)executionDidBegin;

@end
