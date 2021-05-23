/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject

{
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property (nonatomic, readonly) unsigned long long extendedLogDataStringEncoding;
@property (nonatomic, readonly) NSArray *events;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)extendedLogData;
- (id)initWithLogArray:(id)arg1;
- (id)_common_init;
- (id)_errorLogArray;

@end
