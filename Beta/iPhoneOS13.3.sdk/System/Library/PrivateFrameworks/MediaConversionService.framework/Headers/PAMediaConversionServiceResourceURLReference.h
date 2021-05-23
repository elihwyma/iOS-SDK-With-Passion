/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject

{
    _Bool _mustStopAccessingURL;
    _Bool _shouldDeleteOnDeallocation;
    NSURL *_url;
}

@property (retain) NSURL *url;
@property _Bool mustStopAccessingURL;
@property _Bool shouldDeleteOnDeallocation;

+ (id)referenceWithURL:(id)arg1;
+ (id)referenceWithDictionaryRepresentation:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)getFileSize:(unsigned long long *)arg1 error:(id *)arg2;
- (id)dictionaryRepresentationWithError:(id *)arg1;

@end
