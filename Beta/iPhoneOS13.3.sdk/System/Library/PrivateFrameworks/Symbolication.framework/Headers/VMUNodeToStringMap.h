/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject

{
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_nodeToStringIndexMapVoidPtr;
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
- (unsigned int)uniquedStringCount;
- (unsigned int)_indexForString:(id)arg1;
- (void)setString:(id)arg1 forNode:(unsigned int)arg2;
- (id)stringForNode:(unsigned int)arg1;

@end
