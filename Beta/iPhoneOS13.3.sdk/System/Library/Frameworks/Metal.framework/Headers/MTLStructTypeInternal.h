/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLStructType.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLStructTypeInternal : MTLStructType

{
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
    _Bool _isIndirectArgumentBuffer;
}

@property _Bool isIndirectArgumentBuffer;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)dataType;
- (id)members;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setMembers:(id *)arg1 count:(unsigned long long)arg2;
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2;
- (id)memberByName:(id)arg1;
- (_Bool)isStructLayoutThreadSafeWith:(id)arg1;

@end
