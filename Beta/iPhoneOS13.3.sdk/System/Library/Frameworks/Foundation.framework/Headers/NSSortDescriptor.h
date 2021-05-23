/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSSortDescriptor : NSObject <Swift>

{
    unsigned long long _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
}

@property (copy, readonly) NSString *key;
@property (readonly) _Bool ascending;
@property (readonly) SEL selector;
@property (readonly) CDUnknownBlockType comparator;
@property (retain, readonly) id reversedSortDescriptor;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(_Bool)arg2 selector:(SEL)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(_Bool)arg2;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(_Bool)arg2 comparator:(CDUnknownBlockType)arg3;
+ (id)sortDescriptorWithKey:(id)arg1;
+ (id)_defaultSelectorName;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)initWithKey:(id)arg1 ascending:(_Bool)arg2 selector:(SEL)arg3;
- (id)initWithKey:(id)arg1 ascending:(_Bool)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)initWithKey:(id)arg1 ascending:(_Bool)arg2;
- (id)_selectorName;
- (void)_setSelectorName:(id)arg1;
- (void)_disallowEvaluation;
- (_Bool)_isEqualToSortDescriptor:(id)arg1;
- (id)initWithKey:(id)arg1;
- (void)allowEvaluation;
- (void)_setKey:(id)arg1;
- (void)_setAscending:(_Bool)arg1;

@end
