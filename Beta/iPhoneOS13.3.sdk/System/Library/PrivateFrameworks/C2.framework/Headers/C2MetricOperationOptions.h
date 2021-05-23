/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2MetricOperationGroupOptions, NSString;

@interface C2MetricOperationOptions : NSObject

{
    C2MetricOperationGroupOptions *_operationGroup;
    NSString *_operationId;
    NSString *_operationType;
}

@property (copy, nonatomic) C2MetricOperationGroupOptions *operationGroup;
@property (copy, nonatomic) NSString *operationId;
@property (copy, nonatomic) NSString *operationType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
