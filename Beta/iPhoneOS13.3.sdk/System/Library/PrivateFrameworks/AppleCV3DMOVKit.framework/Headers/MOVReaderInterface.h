/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <MOVStreamIO/MOVStreamReader.h>

@class NSDictionary, NSString;

@interface MOVReaderInterface : MOVStreamReader

{
    NSDictionary *_enforcedVideoTrackFormat;
    NSString *_deviceName;
    NSString *_deviceString;
    NSString *_bundleID;
    NSString *_version;
    NSString *_serialNumber;
}

@property (retain, nonatomic) NSDictionary *enforcedVideoTrackFormat;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceString;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *serialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSuperWideStream:(id)arg1;

- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)grabSummary;
- (id)mapProductToDevice:(id)arg1;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)grabNextRawAccelData:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextRawGyroData:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextDeviceMotionData:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextCLLocation:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextCMDeviceMotion:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextUserEvent:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextPRDevice:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextFeatureBuffer:(CDStruct_5c5366e1 *)arg1;
- (id)grabNextDictionary:(id)arg1 timeRange:(CDStruct_5c5366e1 *)arg2;
- (id)grabNextClass:(id)arg1 class:(Class)arg2 timeRange:(CDStruct_5c5366e1 *)arg3;
- (id)grabNextNSCoderObject:(id)arg1 classes:(id)arg2 timeRange:(CDStruct_5c5366e1 *)arg3;
- (unsigned int)reader:(id)arg1 pixelFormatForStream:(id)arg2 suggestedFormat:(unsigned int)arg3;
- (id)initWithFileURL:(id)arg1 enforcedVideoTrackFormat:(id)arg2 error:(id *)arg3;
- (id)grabNextMetadataOfStream2:(id)arg1 timeRange:(CDStruct_5c5366e1 *)arg2 error:(id *)arg3;
- (id)grabNextRawAccelData;
- (id)grabNextRawGyroData;
- (id)grabNextDeviceMotionData;
- (id)grabNextCLLocation;
- (id)grabNextCMDeviceMotion;
- (id)grabNextUserEvent;
- (id)grabNextPRDevice;
- (id)grabNextFeatureBuffer;
- (id)grabNextDictionary:(id)arg1;
- (id)grabNextClass:(id)arg1 class:(Class)arg2;
- (id)grabNextNSCoderObject:(id)arg1 class:(Class)arg2;
- (id)grabNextNSCoderObject:(id)arg1 class:(Class)arg2 timeRange:(CDStruct_5c5366e1 *)arg3;
- (id)grabNextNSCoderObject:(id)arg1 classes:(id)arg2;

@end
