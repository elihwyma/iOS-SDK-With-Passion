/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObjectList.h>

@class ODDLayoutVariablePropertySet;

__attribute__((visibility("hidden")))
@interface ODDLayoutNode : ODDLayoutObjectList

{
    ODDLayoutVariablePropertySet *mVariableList;
}

- (id)description;
- (id)variableList;
- (void)setVariableList:(id)arg1;

@end
