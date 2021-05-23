/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSString;

@interface ATRemoteFileManagerLinkHandler : NSObject

{
    NSFileManager *_fm;
    NSString *_rootPath;
}

@property (copy, nonatomic) NSString *rootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)_path:(id)arg1;
- (id)_createDirectory:(id)arg1;
- (id)_directoryContents:(id)arg1;
- (id)_usage:(id)arg1;
- (id)_uploadFile:(id)arg1;
- (id)_downloadFile:(id)arg1;
- (id)_moveItems:(id)arg1;
- (id)_removeItems:(id)arg1;
- (id)_copyItems:(id)arg1;
- (id)_freeSpace:(id)arg1;
- (id)_progress:(id)arg1;
- (id)initWithRootPath:(id)arg1;

@end
