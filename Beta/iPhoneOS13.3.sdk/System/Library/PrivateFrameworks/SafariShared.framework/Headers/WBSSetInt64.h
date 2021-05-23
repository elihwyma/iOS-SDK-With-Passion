/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@interface WBSSetInt64 : NSObject <Swift>

{
    unordered_set_da619913 _set;
}

@property (nonatomic, readonly) const unordered_set_da619913 *set;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSet:(const unordered_set_da619913 *)arg1;
- (id).cxx_construct;
- (_Bool)contains:(long long)arg1;
- (id)initWithInt64:(long long)arg1;
- (id)commaSeparatedValues;
- (id)initWithMovableSet:(unordered_set_da619913 *)arg1;

@end
