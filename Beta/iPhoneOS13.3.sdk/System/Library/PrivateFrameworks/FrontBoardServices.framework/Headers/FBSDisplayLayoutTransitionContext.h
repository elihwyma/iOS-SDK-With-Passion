/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBSDisplayLayoutTransitionContext : NSObject <Swift>

{
    NSOrderedSet *_transitionReasons;
}

@property (copy, nonatomic, readonly) NSSet *transitionReasons;
@property (copy, nonatomic, readonly) NSString *transitionReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setTransitionReasons:(id)arg1;

@end
