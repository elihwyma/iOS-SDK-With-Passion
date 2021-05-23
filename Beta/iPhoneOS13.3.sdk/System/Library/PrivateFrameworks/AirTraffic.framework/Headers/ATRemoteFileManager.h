/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ATMessageLink;

@interface ATRemoteFileManager : NSObject

{
    ATMessageLink *_messageLink;
}

@property (retain, nonatomic) ATMessageLink *messageLink;

- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithMessageLink:(id)arg1;
- (id)_sendRequest:(id)arg1 error:(id *)arg2;
- (_Bool)uploadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_readStreamData:(id)arg1 error:(id *)arg2;
- (_Bool)downloadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;
- (_Bool)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;
- (void)progressUpdatedWithPercentage:(double)arg1 size:(unsigned long long)arg2;
- (_Bool)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)usageOfDirectoryAtPath:(id)arg1 count:(unsigned long long *)arg2 size:(unsigned long long *)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;
- (_Bool)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;
- (_Bool)uploadData:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)dataAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)removeItemAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)freeSpace:(unsigned long long *)arg1 error:(id *)arg2;

@end
