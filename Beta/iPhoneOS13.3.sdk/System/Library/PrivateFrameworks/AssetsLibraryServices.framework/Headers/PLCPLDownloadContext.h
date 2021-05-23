/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface PLCPLDownloadContext : NSObject

{
    _Bool _completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
    double _updateLastQueuedTime;
}

@property (retain) NSString *taskIdentifier;
@property (retain) NSString *resourceTypeDescription;
@property double progress;
@property _Bool completed;
@property (retain) NSError *error;
@property double updateLastQueuedTime;

- (id)description;
- (void)updateFromDownloadStatusUserInfo:(id)arg1;

@end
