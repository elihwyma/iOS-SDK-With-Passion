/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSSortDescriptor.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor

{
    CLLocation *_relativeLocation;
}

@property (copy, nonatomic) CLLocation *relativeLocation;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)CKPropertiesDescription;
- (id)initWithKey:(id)arg1 relativeLocation:(id)arg2;

@end
