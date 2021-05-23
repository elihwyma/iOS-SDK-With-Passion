/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString;

@interface HDDatabaseJournalFile : NSObject

{
    NSString *_fileName;
    NSFileHandle *_fileHandle;
}

@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSFileHandle *fileHandle;

@end
