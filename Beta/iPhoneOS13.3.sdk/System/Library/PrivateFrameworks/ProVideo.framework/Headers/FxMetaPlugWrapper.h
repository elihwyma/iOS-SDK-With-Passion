/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxMetaPlugWrapper : NSObject

- (Class)plugInClass;
- (id)plugInTypeUUID;
- (id)defaultFolderURLs;
- (id)fxMetaPlugsInFolderURLs:(id)arg1 includingBuiltIns:(_Bool)arg2;

@end
