/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REDiffOperation : NSObject

{
    unsigned long long _type;
    long long _toIndex;
    long long _fromIndex;
    id _item;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long toIndex;
@property (nonatomic, readonly) long long fromIndex;
@property (nonatomic, readonly) id item;

+ (id)reloadWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)insertWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)deleteWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)moveWithItem:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;

- (id)description;
- (id)initWithType:(unsigned long long)arg1 item:(id)arg2 toIndex:(long long)arg3 fromIndex:(long long)arg4;

@end
