/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSFileHandle, NSString;

@interface UNSFileHandleWrapper : NSObject

{
    NSFileHandle *_fileHandle;
    NSString *_path;
}

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) NSString *path;

@end
