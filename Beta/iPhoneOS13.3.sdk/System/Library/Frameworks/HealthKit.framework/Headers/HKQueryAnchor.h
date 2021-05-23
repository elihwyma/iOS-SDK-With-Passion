/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@interface HKQueryAnchor : NSObject <Swift>

{
    long long _rowid;
}

@property (nonatomic, getter=_rowid, setter=_setRowid:) long long rowid;

+ (_Bool)supportsSecureCoding;
+ (id)latestAnchor;
+ (id)anchorFromValue:(unsigned long long)arg1;
+ (id)_anchorWithRowidValue:(long long)arg1;
+ (id)_anchorWithRowid:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
