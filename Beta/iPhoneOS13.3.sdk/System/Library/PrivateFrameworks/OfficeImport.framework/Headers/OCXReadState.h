/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXState.h>

__attribute__((visibility("hidden")))
@interface OCXReadState : OCXState

- (id)OCXReadRequiredRelationshipForNode:(struct _xmlNode *)arg1 packagePart:(id)arg2;
- (id)OCXReadRelationshipForNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2 packagePart:(id)arg3;
- (id)OCXReadRelationshipForNode:(struct _xmlNode *)arg1 packagePart:(id)arg2;
- (id)OCXReadRequiredRelationshipForNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2 packagePart:(id)arg3;

@end
