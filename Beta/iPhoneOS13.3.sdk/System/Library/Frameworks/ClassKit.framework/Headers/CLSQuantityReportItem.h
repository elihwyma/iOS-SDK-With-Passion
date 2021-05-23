/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSActivityReportItem.h>

@interface CLSQuantityReportItem : CLSActivityReportItem

{
    double _quantity;
}

@property (nonatomic) double quantity;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)add:(id)arg1;
- (void)scalarMultiply:(double)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;

@end
