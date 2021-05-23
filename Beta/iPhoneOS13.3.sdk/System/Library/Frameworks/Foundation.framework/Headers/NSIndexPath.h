/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSIndexPath : NSObject <Swift>

{
    unsigned long long *_indexes;
    unsigned long long _length;
    void *_reserved;
}

@property (readonly) unsigned long long length;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)indexPathWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;
+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (void)getIndexes:(unsigned long long *)arg1 range:(struct _NSRange)arg2;
- (id)initWithIndex:(unsigned long long)arg1;
- (void)getIndexes:(unsigned long long *)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;

@end
