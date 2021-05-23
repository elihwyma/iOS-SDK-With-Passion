/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, SidecarDevice;

@interface SidecarDisplayConfig : NSObject

{
    SidecarDevice *_device;
    NSNumber *_cipher;
    NSNumber *_codec;
    NSNumber *_displayID;
    NSNumber *_enableTimeSync;
    NSNumber *_framerate;
    NSNumber *_keyFrameInterval;
    NSNumber *_lowLatency;
    NSNumber *_rtcp;
    NSNumber *_rtcpTimeoutInterval;
    NSString *_service;
    NSNumber *_showTouchBar;
    NSNumber *_showSideBar;
    double _scale;
    NSNumber *_tilesPerFrame;
    long long _transport;
    NSNumber *_dataLink;
    NSNumber *_txMinBitrate;
    NSNumber *_txMaxBitrate;
    struct CGSize _size;
}

@property (retain, nonatomic) SidecarDevice *device;
@property (retain, nonatomic) NSNumber *cipher;
@property (retain, nonatomic) NSNumber *codec;
@property (retain, nonatomic) NSNumber *displayID;
@property (retain, nonatomic) NSNumber *enableTimeSync;
@property (retain, nonatomic) NSNumber *framerate;
@property (retain, nonatomic) NSNumber *keyFrameInterval;
@property (retain, nonatomic) NSNumber *lowLatency;
@property (retain, nonatomic) NSNumber *rtcp;
@property (retain, nonatomic) NSNumber *rtcpTimeoutInterval;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) NSNumber *showTouchBar;
@property (retain, nonatomic) NSNumber *showSideBar;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSNumber *tilesPerFrame;
@property (nonatomic) long long transport;
@property (retain, nonatomic) NSNumber *dataLink;
@property (retain, nonatomic) NSNumber *txMinBitrate;
@property (retain, nonatomic) NSNumber *txMaxBitrate;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
