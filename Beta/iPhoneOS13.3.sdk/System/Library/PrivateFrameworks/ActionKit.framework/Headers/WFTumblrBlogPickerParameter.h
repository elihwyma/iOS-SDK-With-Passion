/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    WFTumblrAccessResource *_tumblrAccessResource;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource;

+ (void)initialize;
+ (id)referencedActionResourceClasses;

- (_Bool)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)arg1;
- (void)updateBlogs;

@end
