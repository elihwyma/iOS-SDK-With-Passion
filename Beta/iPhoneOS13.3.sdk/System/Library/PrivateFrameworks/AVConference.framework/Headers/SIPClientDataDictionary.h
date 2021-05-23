/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SIPClientDataDictionary : NSObject

{
    NSMutableDictionary *allCalls;
}

- (id)init;
- (void)dealloc;
- (id)copyObjectForKey:(id)arg1 p2pID:(unsigned int)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forP2PID:(unsigned int)arg3;

@end
