/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface CKDFileWatcher : NSObject

{
    int _fd;
    NSString *_path;
    NSObject<OS_dispatch_source> *_source;
}

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) int fd;

+ (id)queue;

- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
