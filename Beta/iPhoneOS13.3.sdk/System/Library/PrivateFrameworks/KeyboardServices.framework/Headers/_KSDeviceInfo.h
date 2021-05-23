/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _KSDeviceInfo : NSObject

{
    _Bool _needsUpdate;
    NSString *_name;
    NSString *_swVersion;
    NSString *_model;
    NSString *_modelDisplayName;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *swVersion;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelDisplayName;
@property (nonatomic) _Bool needsUpdate;

+ (id)ksDecviceWithiCloudDeviceInfo:(id)arg1;
+ (id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4;
+ (id)ksDeviceWithName:(id)arg1 needsUpgrade:(_Bool)arg2;
+ (id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2;

@end
