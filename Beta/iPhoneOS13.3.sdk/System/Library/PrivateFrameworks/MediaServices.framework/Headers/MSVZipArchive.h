/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MSVZipArchive : NSObject

{
    struct BOMSys *_bomsys;
    NSString *_archivePath;
    NSMutableArray *_filesToArchive;
}

- (id)init;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (void)addFileAtPath:(id)arg1;
- (_Bool)writeToFileAtPath:(id)arg1 withError:(id *)arg2;
- (_Bool)decompressToPath:(id)arg1 withError:(id *)arg2;

@end
