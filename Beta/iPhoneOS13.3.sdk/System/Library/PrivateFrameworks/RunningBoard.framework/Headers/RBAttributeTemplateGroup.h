/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RBAttributeTemplateGroup : NSObject

{
    NSArray *_attributes;
    NSDictionary *_originatorEntitlements;
    NSDictionary *_targetBundleProperties;
}

@property (retain, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSDictionary *originatorEntitlements;
@property (copy, nonatomic) NSDictionary *targetBundleProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
