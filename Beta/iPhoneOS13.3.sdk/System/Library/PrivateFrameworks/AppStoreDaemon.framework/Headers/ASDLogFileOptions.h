/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@interface ASDLogFileOptions : NSObject <Swift>

{
    NSString *_directoryPath;
    NSString *_fileName;
    unsigned long long _maxSizeInBytes;
    long long _maxNumberOfLogFiles;
}

@property (copy, nonatomic) NSString *logDirectoryPath;
@property (copy, nonatomic) NSString *logFileBaseName;
@property (nonatomic) unsigned long long maxLogFileSize;
@property (nonatomic) long long maxNumberOfLogFiles;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
