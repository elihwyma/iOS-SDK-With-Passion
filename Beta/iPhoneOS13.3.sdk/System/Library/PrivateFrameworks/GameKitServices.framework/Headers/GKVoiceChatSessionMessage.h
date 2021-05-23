/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GKOOBMessage.h>

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage

{
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
- (id)data;
- (unsigned int)subtype;
- (id)payload;
- (unsigned int)conferenceID;
- (_Bool)_checkType:(unsigned short)arg1;
- (_Bool)_checkSize:(unsigned long long)arg1;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;

@end
