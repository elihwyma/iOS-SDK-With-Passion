/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNReferenceNode.h>

@class NSString;

@interface SCNNodeReference : SCNReferenceNode

{
    NSString *referenceSceneName;
    NSString *referenceNodeName;
}

@property (copy, nonatomic) NSString *referenceSceneName;
@property (copy, nonatomic) NSString *referenceNodeName;

- (void)dealloc;
- (void)_reloadWithScene:(id)arg1;

@end
