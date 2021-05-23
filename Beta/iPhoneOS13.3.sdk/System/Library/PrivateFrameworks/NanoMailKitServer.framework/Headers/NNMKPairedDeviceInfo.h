/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@interface NNMKPairedDeviceInfo : NSObject

{
    double _screenWidth;
    double _screenScale;
}

@property (nonatomic) double screenWidth;
@property (nonatomic) double screenScale;

+ (id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2;

@end
