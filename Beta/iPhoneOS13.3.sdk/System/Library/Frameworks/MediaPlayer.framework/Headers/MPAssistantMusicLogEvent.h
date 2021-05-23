/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MPAssistantMusicLogEvent : NSObject

{
    unsigned int _sessionID;
    NSString *_siriSessionIdentifier;
}

@property (nonatomic) unsigned int sessionID;
@property (copy, nonatomic) NSString *siriSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) long long eventCode;
@property (nonatomic, readonly) NSMutableDictionary *eventPayload;

@end
