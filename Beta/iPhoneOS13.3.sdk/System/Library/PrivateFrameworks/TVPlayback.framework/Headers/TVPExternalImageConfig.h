/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TVPExternalImageConfig : NSObject

{
    _Bool _usesOneBasedImageIndexes;
    double _imageInterval;
    long long _imageCount;
    NSURL *_baseURL;
    NSString *_imageNameFormatString;
    NSString *_version;
}

@property (nonatomic) double imageInterval;
@property (nonatomic) long long imageCount;
@property (copy, nonatomic) NSURL *baseURL;
@property (nonatomic) _Bool usesOneBasedImageIndexes;
@property (copy, nonatomic) NSString *imageNameFormatString;
@property (copy, nonatomic) NSString *version;

@end
