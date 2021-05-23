/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLockedFile : NSObject

{
    int _fd;
    NSString *_fileName;
}

@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) int fd;

+ (id)lockFile:(id)arg1 openFlags:(int)arg2;

- (void)dealloc;
- (void)close;
- (id)fileHandle;
- (id)initWithFileName:(id)arg1 openFlags:(int)arg2;
- (void)lockWithPromise:(id)arg1;

@end
