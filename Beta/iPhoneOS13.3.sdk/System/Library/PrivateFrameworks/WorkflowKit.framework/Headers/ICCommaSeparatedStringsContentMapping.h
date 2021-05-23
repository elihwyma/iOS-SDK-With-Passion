/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICContentMapping.h>

@interface ICCommaSeparatedStringsContentMapping : ICContentMapping

- (_Bool)supportsMultipleItems;
- (_Bool)skipURLEncoding;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (id)contentItemClasses;
- (id)escapedCharacters;
- (id)allowedCharacterSet;

@end
