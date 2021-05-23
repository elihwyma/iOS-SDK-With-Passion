/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFNoteGroupPickerParameter : WFDynamicEnumerationParameter

{
    NSString *_appBundleIdentifier;
}

@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;

@end
