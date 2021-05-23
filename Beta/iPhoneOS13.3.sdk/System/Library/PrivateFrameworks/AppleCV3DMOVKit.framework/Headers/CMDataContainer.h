/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface CMDataContainer : NSObject

{
    unsigned long long nextDataSent;
    unsigned long long nextDataRecv;
    unsigned long long nextMsgSent;
    unsigned long long nextMsgRecv;
    unsigned long long nextEvent;
    NSString *_version;
    NSString *_cv3dVersion;
    NSString *_iOSVersion;
    NSString *_macOSVersion;
    NSString *_cvPlayerVersion;
    NSString *_deviceString;
    NSNumber *_sessionID;
    NSMutableArray *_cmDataSent;
    NSMutableArray *_cmDataRecv;
    NSMutableArray *_cmMsgSent;
    NSMutableArray *_cmMsgRecv;
    NSMutableArray *_cmEvents;
}

@property (retain) NSString *version;
@property (retain) NSString *cv3dVersion;
@property (retain) NSString *iOSVersion;
@property (retain) NSString *macOSVersion;
@property (retain) NSString *cvPlayerVersion;
@property (retain) NSString *deviceString;
@property (retain) NSNumber *sessionID;
@property (retain) NSMutableArray *cmDataSent;
@property (retain) NSMutableArray *cmDataRecv;
@property (retain) NSMutableArray *cmMsgSent;
@property (retain) NSMutableArray *cmMsgRecv;
@property (retain) NSMutableArray *cmEvents;

+ (_Bool)supportsSecureCoding;
+ (id)classes;
+ (id)versionS;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resetReader;
- (id)grabNextDataRecv;
- (id)grabNextDataSent;
- (id)grabNextMessageRecv;
- (id)grabNextMessageSent;
- (id)grabNextEvent;
- (void)appendCMData:(id)arg1 sending:(_Bool)arg2;
- (void)appendCMMessage:(id)arg1 sending:(_Bool)arg2;
- (void)appendCMEvent:(id)arg1;

@end
