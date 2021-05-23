/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OCCancel, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCMapper : NSObject

{
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)init;
- (void)cancel;
- (_Bool)isCancelled;
- (void)teardown;
- (void)setup;
- (void)quit;
- (id)temporaryDirectoryPath;

@end
