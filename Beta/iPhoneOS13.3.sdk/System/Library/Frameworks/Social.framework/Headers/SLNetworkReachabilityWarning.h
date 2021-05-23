/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SLNetworkReachabilityWarning : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSString *_serviceType;
}

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithServiceType:(id)arg1;
- (void)showIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)showIfNecessary;

@end
