/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKOperationMetrics, NSError, NSString;

@interface CKOperationResult : NSObject

{
    NSString *_operationID;
    NSError *_error;
    CKOperationMetrics *_metrics;
}

@property (retain, nonatomic) NSString *operationID;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CKOperationMetrics *metrics;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
