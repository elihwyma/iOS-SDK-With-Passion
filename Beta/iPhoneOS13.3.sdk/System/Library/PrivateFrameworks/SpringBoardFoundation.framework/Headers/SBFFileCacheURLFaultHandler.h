/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURLSession;

@interface SBFFileCacheURLFaultHandler : NSObject

{
    NSArray *_retryIntervals;
    NSURLSession *_urlSession;
}

@property (retain) NSURLSession *urlSession;
@property (copy) NSArray *retryIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)attemptLoadFromURL:(id)arg1 session:(id)arg2 retryIntervalEnumerator:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performLoadFromURL:(id)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
