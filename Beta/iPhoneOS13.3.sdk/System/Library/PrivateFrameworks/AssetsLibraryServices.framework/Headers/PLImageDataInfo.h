/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface PLImageDataInfo : NSObject

{
    _Bool _deliveredPlaceholder;
    _Bool _canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

@property long long deliveredFormat;
@property _Bool deliveredPlaceholder;
@property _Bool canDownloadFromCloud;
@property (retain) NSURL *URL;
@property (retain) NSString *sandboxExtensionToken;
@property (retain) NSString *UTI;
@property long long EXIFOrientation;

- (id)description;

@end
