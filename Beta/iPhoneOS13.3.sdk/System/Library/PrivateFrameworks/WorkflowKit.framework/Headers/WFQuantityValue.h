/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <Swift>

{
    NSDecimalNumber *_magnitude;
    NSString *_unitString;
}

@property (nonatomic, readonly) NSDecimalNumber *magnitude;
@property (copy, nonatomic, readonly) NSString *unitString;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMagnitude:(id)arg1 unitString:(id)arg2;

@end
