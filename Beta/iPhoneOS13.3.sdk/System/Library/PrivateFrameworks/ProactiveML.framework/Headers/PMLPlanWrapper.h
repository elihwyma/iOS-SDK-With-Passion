/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSString;

@protocol PMLPlanProtocol;

@interface PMLPlanWrapper : NSObject <Swift>

{
    id <PMLPlanProtocol> _plan;
}

@property (nonatomic, readonly) id <PMLPlanProtocol> plan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithPlan:(id)arg1;

@end
