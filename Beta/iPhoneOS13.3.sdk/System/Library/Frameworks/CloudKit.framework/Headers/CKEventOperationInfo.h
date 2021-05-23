/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKEventOperationInfo : NSObject

{
    NSString *_operationID;
    NSString *_operationType;
    NSString *_operationGroupID;
}

@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) NSString *operationType;
@property (nonatomic, readonly) NSString *operationGroupID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperation:(id)arg1;

@end
