/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) SACFProvideContext *updateContext;

+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
