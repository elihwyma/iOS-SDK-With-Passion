/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSAudioRoute : NSObject

{
    _Bool _supportsVideo;
    _Bool _selected;
    NSString *_displayName;
    unsigned long long _macAddress;
}

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long macAddress;
@property (nonatomic) _Bool supportsVideo;
@property (nonatomic, getter=isSelected) _Bool selected;

+ (id)audioRoutesFromProtobufs:(id)arg1;
+ (id)protobufsFromAudioRoutes:(id)arg1;

- (id)protobuf;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)isEqualToAudioRoute:(id)arg1;

@end
