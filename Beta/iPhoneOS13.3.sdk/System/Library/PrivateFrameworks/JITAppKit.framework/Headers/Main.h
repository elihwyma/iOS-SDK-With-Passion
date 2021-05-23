/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSString;

@interface Main : NSObject

{
    NSString *_path;
    NSString *_fileName;
    void *_zip;
}

@property (nonatomic, readonly) _Bool open;
@property (nonatomic, readonly) _Bool close;

+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)dateWithMicrosoftDOSFormat:(unsigned int)arg1;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;

- (id)initWithPath:(id)arg1;
- (_Bool)writeFile:(id)arg1;
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2;
- (void)zipInformation:(CDStruct_192a48cb *)arg1 setDate:(id)arg2;
- (_Bool)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2;
- (_Bool)writeData:(id)arg1 fileName:(id)arg2;

@end
