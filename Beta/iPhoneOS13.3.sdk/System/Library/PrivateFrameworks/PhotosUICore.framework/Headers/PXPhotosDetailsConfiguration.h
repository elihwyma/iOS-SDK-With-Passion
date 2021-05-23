/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXPhotosDetailsConfiguration : NSObject <Swift>

{
    unsigned long long _options;
    Class _barsControllerClass;
    CDUnknownBlockType _unlockDeviceHandler;
    CDUnknownBlockType _unlockDeviceStatus;
}

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) Class barsControllerClass;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceHandler;
@property (copy, nonatomic) CDUnknownBlockType unlockDeviceStatus;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
