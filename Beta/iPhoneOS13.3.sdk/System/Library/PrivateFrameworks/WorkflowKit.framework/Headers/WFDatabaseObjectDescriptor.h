/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRecordDescriptor.h>

@class NSString;

@interface WFDatabaseObjectDescriptor : WFRecordDescriptor

{
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 recordClass:(Class)arg2;

@end
