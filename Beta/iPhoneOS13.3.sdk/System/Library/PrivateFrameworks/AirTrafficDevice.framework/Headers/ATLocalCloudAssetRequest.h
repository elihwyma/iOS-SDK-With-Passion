/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATAsset, NSFileHandle;

@interface ATLocalCloudAssetRequest : NSObject

{
    ATAsset *_asset;
    NSFileHandle *_fileHandle;
    double _startTime;
}

@property (retain, nonatomic) ATAsset *asset;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) double startTime;

@end
