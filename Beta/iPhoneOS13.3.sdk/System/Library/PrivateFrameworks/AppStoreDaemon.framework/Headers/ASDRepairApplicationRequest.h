/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDRepairOptions;

@interface ASDRepairApplicationRequest : NSObject

{
    ASDRepairOptions *_options;
}

- (id)initWithOptions:(id)arg1;
- (void)sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
