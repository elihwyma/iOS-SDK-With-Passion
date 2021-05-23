/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <Swift>

{
    WFContentProperty *_property;
}

@property (copy, nonatomic, readonly) WFContentProperty *property;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperty:(id)arg1;

@end
