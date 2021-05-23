/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, TSUURLTrackerFilePresenter;

__attribute__((visibility("hidden")))
@interface TSUURLTracker : NSObject

{
    TSUURLTrackerFilePresenter *_filePresenter;
}

@property (readonly) NSURL *URL;
@property (readonly) NSData *bookmarkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)URLAndReturnError:(id *)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)initWithBookmarkData:(id)arg1 delegate:(id)arg2;

@end
