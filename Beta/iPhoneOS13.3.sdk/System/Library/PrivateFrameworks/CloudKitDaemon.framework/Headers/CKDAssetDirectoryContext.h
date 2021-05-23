/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDAssetDirectoryContext : NSObject

{
    NSString *_mmcsWorkingDirectory;
    NSString *_assetDbPath;
    NSString *_fileStagingPath;
    NSString *_fileDownloadPath;
}

@property (retain, nonatomic) NSString *mmcsWorkingDirectory;
@property (retain, nonatomic) NSString *assetDbPath;
@property (retain, nonatomic) NSString *fileStagingPath;
@property (retain, nonatomic) NSString *fileDownloadPath;

@end
