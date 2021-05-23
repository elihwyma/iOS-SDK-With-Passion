/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDOperationMetrics;

__attribute__((visibility("hidden")))
@interface CKDOperationCombinedMetrics : NSObject

{
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
}

@property (retain, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (retain, nonatomic) CKDOperationMetrics *MMCSMetrics;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithCloudKitMetrics:(id)arg1 andMMCSMetrics:(id)arg2;

@end
