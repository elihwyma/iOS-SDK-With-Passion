/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKMetric;

@interface CKOperationMetrics : NSObject

{
    CKMetric *_cloudKitMetrics;
    CKMetric *_MMCSMetrics;
}

@property (retain, nonatomic) CKMetric *cloudKitMetrics;
@property (retain, nonatomic) CKMetric *MMCSMetrics;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)CKPropertiesDescription;
- (void)unionMetrics:(id)arg1;

@end
