/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLSCurationDebugStateEntry : NSObject

{
    unsigned long long _state;
    NSString *_reason;
    NSString *_agent;
    NSString *_stage;
}

@property (readonly) unsigned long long state;
@property (readonly) NSString *reason;
@property (readonly) NSString *agent;
@property (readonly) NSString *stage;

- (id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4;

@end
