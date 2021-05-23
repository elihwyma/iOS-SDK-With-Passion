/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface IPPortWrapper : NSObject

{
    struct tagIPPORT *_ipport;
}

@property struct tagIPPORT *ipport;

- (id)init;
- (void)dealloc;

@end
