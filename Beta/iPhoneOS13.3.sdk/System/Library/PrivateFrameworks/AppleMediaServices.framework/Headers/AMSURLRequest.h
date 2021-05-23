/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSMutableURLRequest.h>

@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest

{
    AMSURLRequestProperties *_properties;
}

@property (retain, nonatomic) AMSURLRequestProperties *properties;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;

@end
