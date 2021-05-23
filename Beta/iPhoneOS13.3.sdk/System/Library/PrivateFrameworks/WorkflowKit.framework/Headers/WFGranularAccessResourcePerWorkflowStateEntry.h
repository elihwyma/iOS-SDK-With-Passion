/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSNumber;

@protocol NSObject><NSSecureCoding;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <Swift>

{
    id <NSObject><NSSecureCoding> _value;
    NSNumber *_authorized;
}

@property (nonatomic, readonly) id <NSObject><NSSecureCoding> value;
@property (nonatomic, readonly) NSNumber *authorized;

+ (_Bool)supportsSecureCoding;
+ (id)valueKey;
+ (Class)valueTypeClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 authorized:(id)arg2;
- (id)entryBySettingAuthorized:(_Bool)arg1;

@end
