/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@protocol MPAssistantLogEvent <Swift>

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) long long eventCode;
@property (nonatomic, readonly) NSMutableDictionary *eventPayload;

@end
