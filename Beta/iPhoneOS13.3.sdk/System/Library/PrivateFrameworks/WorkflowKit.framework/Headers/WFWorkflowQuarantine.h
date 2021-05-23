/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDate, NSString;

@interface WFWorkflowQuarantine : NSObject <Swift>

{
    NSString *_sourceAppIdentifier;
    NSDate *_importDate;
}

@property (copy, nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSDate *importDate;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)serializedData;
- (id)initWithSerializedData:(id)arg1;
- (id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2;

@end
