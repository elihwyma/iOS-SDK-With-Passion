/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FPArchiveTemporaryFolder : NSObject

{
    NSURL *_url;
    _Bool _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)temporaryFolderURLGetError:(id *)arg1;

@end
