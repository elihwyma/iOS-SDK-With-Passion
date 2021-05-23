/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <Swift>

{
    NSMutableArray *_tabs;
}

+ (id)tabs;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)insertTab:(id)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (id)initWithTabs:(id)arg1;
- (id)tabAtPosition:(double)arg1;
- (id)tabAfterPosition:(double)arg1;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)setPosition:(double)arg1 forTab:(id)arg2;
- (unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;

@end
