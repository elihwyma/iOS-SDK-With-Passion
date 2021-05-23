/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMomentsResults : NSObject

{
    int _capabilities;
    int _imageType;
    int _videoCodec;
    int _multiwayCapabilities;
}

@property (nonatomic) int capabilities;
@property (nonatomic) int mulitwayCapabilities;
@property (nonatomic, readonly) unsigned int avcMomentsCapabilities;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;

@end
