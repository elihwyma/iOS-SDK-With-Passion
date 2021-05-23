/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAbsintheSignature : NSObject

{
    NSString *_signature;
    NSString *_servKey;
}

@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *servKey;

@end
