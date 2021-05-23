/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class CMDataContainer;

@interface CMFileInterface : NSObject

{
    CMDataContainer *_cmDataContainer;
}

+ (void)updateCV3DVersion:(id)arg1 container:(id)arg2;
+ (void)updateCVPlayerVersion:(id)arg1 container:(id)arg2;
+ (void)updateSessionID:(id)arg1 container:(id)arg2;
+ (_Bool)writeContainerToFileURL:(id)arg1 container:(id)arg2;

- (id)version;
- (id)sessionID;
- (void)resetReader;
- (id)grabNextEvent;
- (id)cv3dVersion;
- (id)iOSVersion;
- (id)macOSVersion;
- (id)cvPlayerVersion;
- (id)deviceString;
- (id)initReaderWithFileURL:(id)arg1;
- (id)grabNextRecvData;
- (id)grabNextSentData;
- (id)grabNextRecvMessage;
- (id)grabNextSentMessage;
- (id)initWriter;
- (void)updateCV3DVersion:(id)arg1;
- (void)updateCVPlayerVersion:(id)arg1;
- (void)updateSessionID:(id)arg1;
- (void)processCMData:(id)arg1 sending:(_Bool)arg2;
- (_Bool)saveToFileURL:(id)arg1;

@end
