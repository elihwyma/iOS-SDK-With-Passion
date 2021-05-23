/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFPodcastPickerParameter : WFDynamicEnumerationParameter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (_Bool)preferItemPickerSheet;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;

@end
