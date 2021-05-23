/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionSource.h>

@class NSString;

@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource

{
    NSString *_fileType;
}

@property (copy, nonatomic) NSString *fileType;

+ (id)imageSourceForFileType:(id)arg1;
+ (id)videoSourceForFileType:(id)arg1;

- (unsigned long long)length;
- (id)fileURL;
- (struct CGSize)imageDimensions;
- (id)initWithFileType:(id)arg1 mediaType:(long long)arg2;

@end
