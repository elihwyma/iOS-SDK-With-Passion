/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WFResource;

@protocol WFResourceNodeDelegate;

@interface WFResourceNode : NSObject

{
    WFResource *_resource;
    NSArray *_subnodes;
    id <WFResourceNodeDelegate> _delegate;
}

@property (nonatomic, readonly) WFResource *resource;
@property (nonatomic, readonly) NSArray *subnodes;
@property (weak, nonatomic) id <WFResourceNodeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nodesWithDefinitions:(id)arg1;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)initWithResource:(id)arg1;
- (void)resourceNodeAvailabilityChanged:(id)arg1;
- (id)initWithResource:(id)arg1 subnodes:(id)arg2;
- (void)resourceUpdated;

@end
