/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SWCrashRetryThrottler : NSObject

{
    _Bool _crashed;
    unsigned long long retryPolicy;
}

@property (nonatomic) _Bool crashed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long retryPolicy;

- (_Bool)shouldReloadAfterWebProcessCrash;

@end
