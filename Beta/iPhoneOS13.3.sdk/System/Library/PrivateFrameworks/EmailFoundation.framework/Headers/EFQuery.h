/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface EFQuery : NSObject

{
    Class _targetClass;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _queryOptions;
    NSString *_label;
}

@property (nonatomic, readonly) Class targetClass;
@property (copy, nonatomic, readonly) NSPredicate *predicate;
@property (copy, nonatomic, readonly) NSArray *sortDescriptors;
@property (nonatomic, readonly) unsigned long long queryOptions;
@property (copy, nonatomic, readonly) NSString *label;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 label:(id)arg5;
- (_Bool)_isEqualToQuery:(id)arg1;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;

@end
