/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TRI)

+ (id)dictionaryFromXPCObject:(id)arg1;
+ (id)dictionaryWithKeys:(id)arg1 values:(id)arg2;

- (id)getContextValueWithName:(id)arg1;
- (void)keys:(id *)arg1 values:(id *)arg2;
- (id)tri_setContextValueWithName:(id)arg1 value:(id)arg2;
- (id)tri_contextValueWithName:(id)arg1;
- (id)setContextValueWithName:(id)arg1 value:(id)arg2;

@end
