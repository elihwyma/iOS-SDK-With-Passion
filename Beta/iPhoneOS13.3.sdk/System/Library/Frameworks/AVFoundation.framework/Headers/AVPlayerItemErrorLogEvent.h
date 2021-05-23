/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject

{
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSString *serverAddress;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) long long errorStatusCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) NSString *errorComment;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_common_init;

@end
