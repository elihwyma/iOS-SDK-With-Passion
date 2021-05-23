/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RangeObject : NSObject

{
    CDStruct_eba65aba _range;
}

@property (nonatomic, readonly) CDStruct_eba65aba range;

+ (id)rangeObjectWithRange:(CDStruct_eba65aba)arg1;
+ (id)rangesFromIndexSet:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(CDStruct_eba65aba)arg1;
- (void)setRange:(CDStruct_eba65aba)arg1;

@end
