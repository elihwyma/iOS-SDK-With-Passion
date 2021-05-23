/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCImageAttributeRules;

__attribute__((visibility("hidden")))
@interface SDPMediaLine : NSObject

{
    NSMutableArray *_attributes;
    VCImageAttributeRules *_imageAttributeRules;
    NSMutableArray *_payloads;
    unsigned int _rtpId;
    int _rtcpPort;
    int _rtpPort;
    _Bool _allowRTCPFB;
}

@property (nonatomic) unsigned int rtpId;
@property (nonatomic, readonly) _Bool allowRTCPFB;
@property (nonatomic, readonly) int rtcpPort;
@property (nonatomic, readonly) int rtpPort;
@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, readonly) NSArray *payloads;
@property (retain, nonatomic) VCImageAttributeRules *imageAttributeRules;
@property (nonatomic, readonly) NSString *string;

+ (void)fillImageStruct:(id)arg1 imageStruct:(struct imageTag *)arg2;
+ (void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(struct imageTag *)arg3;
+ (void)fillImageArray:(id)arg1 imageArray:(struct imageTag *)arg2;

- (id)init;
- (void)dealloc;
- (void)addAttribute:(id)arg1;
- (void)addPayload:(int)arg1 rtpMap:(id)arg2 formatParameters:(id)arg3;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;
- (id)videoImageAttributes:(int)arg1;
- (id)getVideoSendImages:(id)arg1;
- (_Bool)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4;
- (id)getVideoRecvImages:(id)arg1;
- (id)initWithParser:(id)arg1 rtpPort:(int)arg2 payloads:(id)arg3;
- (void)parseMediaLine:(id)arg1;
- (void)addWifiRules:(id)arg1 cellularRules:(id)arg2 payload:(int)arg3 direction:(int)arg4;
- (void)appendPayload:(int)arg1 dimensions:(struct imageTag *)arg2 direction:(int)arg3 attributeString:(id)arg4;
- (void)addImageAttributeRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 direction:(int)arg4 attributeString:(id)arg5;
- (void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2;
- (void)parseImageAttributeRules:(id)arg1;
- (void)parseAttribute:(id)arg1;
- (_Bool)videoDisplayAttribute:(int *)arg1 withHeight:(int *)arg2;

@end
