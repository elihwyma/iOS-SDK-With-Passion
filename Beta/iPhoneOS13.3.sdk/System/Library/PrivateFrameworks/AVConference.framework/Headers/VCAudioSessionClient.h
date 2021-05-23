/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCAudioSessionMediaProperties;

@protocol VCAudioSessionDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioSessionClient : NSObject

{
    id <VCAudioSessionDelegate> _notificationClient;
    VCAudioSessionMediaProperties *_mediaProperties;
    unsigned char _clientType;
}

@property (nonatomic) unsigned char clientType;
@property (nonatomic) id <VCAudioSessionDelegate> notificationClient;
@property (retain, nonatomic) VCAudioSessionMediaProperties *mediaProperties;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
