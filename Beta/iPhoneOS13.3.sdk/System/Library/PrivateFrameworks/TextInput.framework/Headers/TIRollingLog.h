/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface TIRollingLog : NSObject

{
    NSMutableArray *_entries;
    unsigned long long _nextIndex;
    unsigned long long _count;
    unsigned long long _maxCount;
}

@property (nonatomic, readonly) NSArray *currentEntries;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addEntry:(id)arg1;
- (void)addEntries:(id)arg1;
- (id)initWithMaxCount:(unsigned long long)arg1;

@end
