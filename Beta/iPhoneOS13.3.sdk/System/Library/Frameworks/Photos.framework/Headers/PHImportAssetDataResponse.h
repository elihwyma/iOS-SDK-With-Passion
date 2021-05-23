/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSURL, PHImportAssetDataRequest;

@interface PHImportAssetDataResponse : NSObject

{
    PHImportAssetDataRequest *_request;
    CDUnknownBlockType _completionHandler;
    NSURL *_fileURL;
}

@property (retain, nonatomic) PHImportAssetDataRequest *request;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSURL *fileURL;

+ (id)responseWithDataRequest:(id)arg1;

- (id)initWithRequest:(id)arg1;

@end
