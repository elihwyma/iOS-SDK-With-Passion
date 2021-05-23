/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVCRTCPPacket.h>

@class NSString;

@interface AVCRTCPSourceDescription : AVCRTCPPacket

{
    unsigned char _type;
    NSString *_text;
}

@property (nonatomic) unsigned char type;
@property (retain, nonatomic) NSString *text;

- (void)dealloc;
- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end
