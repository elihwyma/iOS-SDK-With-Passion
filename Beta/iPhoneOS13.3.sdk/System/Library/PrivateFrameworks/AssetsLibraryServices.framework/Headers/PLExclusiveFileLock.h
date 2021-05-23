/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject

{
    NSURL *_url;
    int _fd;
}

@property (nonatomic, readonly) _Bool isLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)unlock;
- (_Bool)lockWithError:(id *)arg1;
- (id)lockData;
- (id)lockFailure;

@end
