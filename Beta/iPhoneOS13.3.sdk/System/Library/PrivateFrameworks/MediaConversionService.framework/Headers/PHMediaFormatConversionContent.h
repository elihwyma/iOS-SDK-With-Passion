/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface PHMediaFormatConversionContent : NSObject

{
    unsigned long long _length;
    NSURL *_fileURL;
    NSString *_fileSignature;
    long long _mediaType;
}

@property (readonly) NSString *fileSignature;
@property long long mediaType;
@property (retain) NSURL *fileURL;
@property (readonly) unsigned long long length;
@property (readonly) NSString *fileType;

- (id)description;
- (_Bool)isVideo;
- (_Bool)isImage;
- (_Bool)isAssetBundle;
- (id)typeIdentifierFromFileExtensionWithError:(id *)arg1;

@end
