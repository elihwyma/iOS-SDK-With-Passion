/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSLogFileOptions : NSObject

{
    NSString *_directoryPath;
    NSString *_fileName;
    long long _maxNumberOfLogFiles;
    unsigned long long _maxSizeInBytes;
}

@property (copy, nonatomic) NSString *logDirectoryPath;
@property (copy, nonatomic) NSString *logFileBaseName;
@property (nonatomic) unsigned long long maxLogFileSize;
@property (nonatomic) long long maxNumberOfLogFiles;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
