/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKEventOperationGroupInfo : NSObject

{
    NSString *_operationGroupID;
    NSString *_operationGroupName;
}

@property (nonatomic, readonly) NSString *operationGroupID;
@property (nonatomic, readonly) NSString *operationGroupName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationGroup:(id)arg1;

@end
