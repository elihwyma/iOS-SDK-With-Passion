/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _TVRXMetrics : NSObject

{
    NSMutableDictionary *_sessionEventCounts;
}

@property (retain, nonatomic) NSMutableDictionary *sessionEventCounts;

+ (id)sharedInstance;

- (id)init;
- (void)incrementKey:(id)arg1;
- (void)incrementKey:(id)arg1 andSessionKey:(id)arg2;
- (void)endSessionForKey:(id)arg1;

@end
