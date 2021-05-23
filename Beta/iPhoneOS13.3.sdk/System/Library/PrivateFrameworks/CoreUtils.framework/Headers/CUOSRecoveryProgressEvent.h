/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CUOSRecoveryProgressEvent : NSObject

{
    int _type;
    NSString *_authenticationText;
    NSDictionary *_configInfo;
    NSError *_error;
}

@property (nonatomic) NSString *authenticationText;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) int type;
@property (copy, nonatomic, readonly) NSDictionary *configInfo;

@end
