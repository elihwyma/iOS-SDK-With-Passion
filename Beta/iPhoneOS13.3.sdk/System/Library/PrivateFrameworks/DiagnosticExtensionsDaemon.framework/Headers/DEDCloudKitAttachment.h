/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSURL;

@interface DEDCloudKitAttachment : NSObject

{
    NSURL *_url;
    NSNumber *_fileSize;
}

@property (retain) NSURL *url;
@property (retain) NSNumber *fileSize;

- (id)initWithURL:(id)arg1;

@end
