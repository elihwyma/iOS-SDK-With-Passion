/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject

{
    _Bool _changesTruncated;
    NSArray *_changes;
}

@property (nonatomic, readonly) NSArray *changes;
@property (nonatomic, readonly) _Bool changesTruncated;

+ (_Bool)supportsSecureCoding;
+ (id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChanges:(id)arg1 changesTruncated:(_Bool)arg2;
- (_Bool)isEqualToContactNameRecordChangeResult:(id)arg1;

@end
