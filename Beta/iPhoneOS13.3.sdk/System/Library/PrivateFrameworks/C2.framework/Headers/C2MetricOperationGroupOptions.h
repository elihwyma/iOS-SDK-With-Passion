/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface C2MetricOperationGroupOptions : NSObject

{
    NSString *_operationGroupId;
    NSString *_operationGroupName;
}

@property (copy, nonatomic) NSString *operationGroupId;
@property (copy, nonatomic) NSString *operationGroupName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
