/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface RBBundlePropertiesBSXPCProvider : NSObject

{
    NSMutableDictionary *_propertiesByIdentifier;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)propertiesForIdentifier:(id)arg1;
- (void)removePropertiesForIdentifier:(id)arg1;

@end
