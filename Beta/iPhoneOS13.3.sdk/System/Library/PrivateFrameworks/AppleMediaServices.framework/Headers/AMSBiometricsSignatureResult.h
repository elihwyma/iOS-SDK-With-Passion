/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBiometricsSignatureRequest, NSString;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureResult : NSObject

{
    AMSBiometricsSignatureRequest *_originalRequest;
    NSString *_signature;
}

@property (retain, nonatomic) AMSBiometricsSignatureRequest *originalRequest;
@property (retain, nonatomic) NSString *signature;

@end
