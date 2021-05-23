/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKFileBackedConfigurationSource, NSString, NSURL;

@interface CRKDirectoryBackedConfigurationSource : NSObject

{
    NSURL *mDirectoryURL;
    CRKFileBackedConfigurationSource *mFileBackedSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 callbackQueue:(id)arg3;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (void)fileBackedConfigurationSource:(id)arg1 didDeleteConfigurationAtURL:(id)arg2 inDirectory:(id)arg3;
- (id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2;
- (_Bool)isDirectoryEmpty:(id)arg1;

@end
