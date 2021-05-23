/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSOperation.h>

@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation

{
    long long _contentMode;
    NSArray *_resourceURLs;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) long long contentMode;
@property (copy, nonatomic, readonly) NSArray *resourceURLs;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (void)main;
- (id)initWithResourceURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)arg1;

@end
