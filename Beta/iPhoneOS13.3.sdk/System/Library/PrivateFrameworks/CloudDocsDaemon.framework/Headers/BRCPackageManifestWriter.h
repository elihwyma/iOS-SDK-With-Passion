/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCClientZone, NSError, NSOutputStream, NSString, NSURL, PBMessageStreamWriter;

@interface BRCPackageManifestWriter : NSObject

{
    BRCClientZone *_clientZone;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
    NSURL *_url;
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *url;

- (_Bool)done;
- (_Bool)addItem:(id)arg1;
- (void)_handleStreamError;
- (void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (_Bool)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (_Bool)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (_Bool)addLocalItem:(id)arg1;
- (id)initWithZone:(id)arg1 stageID:(id)arg2 url:(id)arg3;
- (_Bool)stagePackageWithReader:(id)arg1 package:(id)arg2 xattrsPackage:(id)arg3 stageItemURL:(id)arg4 livefd:(int)arg5 recordName:(id)arg6;

@end
