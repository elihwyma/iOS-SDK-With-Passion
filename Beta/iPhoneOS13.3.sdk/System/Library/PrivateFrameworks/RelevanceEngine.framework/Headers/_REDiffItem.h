/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface _REDiffItem : NSObject

{
    id _object;
    unsigned long long _index;
    CDUnknownBlockType _comparator;
    CDUnknownBlockType _hashGenerator;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) CDUnknownBlockType comparator;
@property (nonatomic, readonly) CDUnknownBlockType hashGenerator;

+ (id)itemWithObject:(id)arg1 index:(unsigned long long)arg2 comparator:(CDUnknownBlockType)arg3 hashGenerator:(CDUnknownBlockType)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
