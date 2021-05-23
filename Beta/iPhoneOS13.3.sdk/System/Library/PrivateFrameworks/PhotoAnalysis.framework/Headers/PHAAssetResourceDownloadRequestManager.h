/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue;

@interface PHAAssetResourceDownloadRequestManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_dateToRequestPermissionAgain;
    unsigned long long _allowedDownloadCount;
    unsigned long long _expectedRequestsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned long long expectedRequestsCount;

+ (id)sharedManager;

- (id)init;
- (id)statusAsDictionary;
- (void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
