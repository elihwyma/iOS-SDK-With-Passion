/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class WFAccessResource;

@interface WFAccessResourceEquivalenceWrapper : NSObject

{
    WFAccessResource *_accessResource;
}

@property (nonatomic, readonly) WFAccessResource *accessResource;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessResource:(id)arg1;

@end
