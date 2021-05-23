/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData;

@interface DSMutableArchive : NSObject

{
    long long _format;
    NSMutableData *_dataBuffer;
    struct NSMutableArray *_tableOfContents;
}

@property (retain, nonatomic) NSMutableData *dataBuffer;
@property (retain, nonatomic) NSMutableArray *tableOfContents;
@property (nonatomic) long long format;

+ (id)archive;
+ (_Bool)extractEntry:(struct archive *)arg1 toArchive:(struct archive *)arg2;
+ (_Bool)extractArchive:(id)arg1 toDirectory:(id)arg2;

- (id)init;
- (_Bool)addURL:(id)arg1 prefix:(id)arg2 error:(id *)arg3;
- (_Bool)addURL:(id)arg1 prefix:(id)arg2 flatten:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_addPathToContents:(id)arg1 searchQueue:(struct NSMutableArray *)arg2 flatten:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_addDirectoryToContents:(id)arg1 searchQueue:(struct NSMutableArray *)arg2 flatten:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_addFile:(id)arg1 archive:(struct archive *)arg2 error:(id *)arg3;
- (void)_setFormatOnArchive:(struct archive *)arg1;
- (_Bool)_writeArchive:(struct archive *)arg1 error:(id *)arg2;
- (id)archiveAsTempFileWithTemplate:(id)arg1 suffix:(id)arg2 error:(id *)arg3;
- (id)archiveAsTempFileWithTemplate:(id)arg1 directory:(id)arg2 suffix:(id)arg3 error:(id *)arg4;
- (_Bool)archiveAsFileUsingDescriptor:(int)arg1 error:(id *)arg2;
- (_Bool)addURL:(id)arg1 error:(id *)arg2;
- (id)archiveAsDataWithError:(id *)arg1;
- (id)archiveAsTempDirectoryWithName:(id)arg1 error:(id *)arg2;
- (id)archiveAsTempFileWithTemplate:(id)arg1 error:(id *)arg2;
- (_Bool)archiveAsFile:(id)arg1 error:(id *)arg2;

@end
