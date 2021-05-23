/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject

{
    NSString *_identifier;
    NSString *_preferredSessionType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *preferredSessionType;

+ (id)requestWithIdentifier:(id)arg1 preferredSessionType:(id)arg2;

@end
