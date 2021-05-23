/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject

{
    NSData *_mediaData;
    NSString *_fileExtension;
    NSURL *_mediaURL;
    PFVideoComplement *_videoComplement;
    long long _mediaType;
}

@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) PFVideoComplement *videoComplement;
@property (nonatomic) long long mediaType;

- (id)initWithDictionary:(id)arg1;
- (id)photoLibrary;
- (id)serializedDictionary;
- (void)_cleanupIfNeededMediaAtURL:(id)arg1;
- (void)cleanupResources;

@end
