/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject

{
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)nwContext;

@end
