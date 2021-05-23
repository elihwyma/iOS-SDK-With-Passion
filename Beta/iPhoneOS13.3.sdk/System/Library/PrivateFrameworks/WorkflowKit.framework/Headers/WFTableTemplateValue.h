/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray;

@interface WFTableTemplateValue : NSObject <Swift>

{
    long long _compoundType;
    NSArray *_rows;
}

@property (nonatomic, readonly) long long compoundType;
@property (copy, nonatomic, readonly) NSArray *rows;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2;

@end
