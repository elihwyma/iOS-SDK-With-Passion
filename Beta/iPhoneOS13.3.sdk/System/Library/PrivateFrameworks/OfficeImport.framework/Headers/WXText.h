/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXText : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromStream:(struct _xmlTextReader *)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFromString:(id)arg1 to:(id)arg2;
+ (void)readFromStream:(struct _xmlTextReader *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)updateTextBoxIdsFromState:(id)arg1;
+ (void)createChildren:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)createChildrenFromStream:(struct _xmlTextReader *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (id)addNewSectionTo:(id)arg1 state:(id)arg2;
+ (void)readFromParagraph:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFromTable:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;

@end
