/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCClientState : NSObject

{
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)description;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
