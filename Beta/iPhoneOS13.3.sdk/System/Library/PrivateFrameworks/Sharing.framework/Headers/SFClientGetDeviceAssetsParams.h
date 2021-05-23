/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject

{
    unsigned short _bluetoothProductID;
    unsigned int _colorCode;
    NSString *_model;
    double _timeoutSeconds;
}

@property (nonatomic) unsigned short bluetoothProductID;
@property (nonatomic) unsigned int colorCode;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) double timeoutSeconds;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
