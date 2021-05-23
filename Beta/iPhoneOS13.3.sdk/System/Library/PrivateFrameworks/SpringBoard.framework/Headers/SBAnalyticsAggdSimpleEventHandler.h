/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBAnalyticsAggdSimpleEventHandler : NSObject

{
    unsigned long long _eventType;
    CDUnknownBlockType _emitBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)latchForEvent:(unsigned long long)arg1 aggdKey:(id)arg2;
+ (id)monotonicallyIncreasingForEvent:(unsigned long long)arg1 aggdKey:(id)arg2;
+ (id)setScalarForEvent:(unsigned long long)arg1 aggdKey:(id)arg2 valueBlock:(CDUnknownBlockType)arg3;

- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithEvent:(unsigned long long)arg1 emitBlock:(CDUnknownBlockType)arg2;

@end
