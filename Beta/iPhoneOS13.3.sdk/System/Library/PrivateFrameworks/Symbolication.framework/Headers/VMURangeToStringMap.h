/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VMURangeToStringMap : NSObject

{
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_rangeAndStringVectorVoidPtr;
    _Bool _sorted;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)_claimUnarchivingOfClass:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sort;
- (unsigned int)uniquedStringCount;
- (unsigned int)indexForString:(id)arg1 insertIfMissing:(_Bool)arg2;
- (void)setString:(id)arg1 forRange:(struct _VMURange)arg2;
- (id)stringForAddress:(unsigned long long)arg1;
- (struct _VMURange)rangeContainingAddress:(unsigned long long)arg1;
- (struct _VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2;
- (id)stringForIndex:(unsigned int)arg1;

@end
