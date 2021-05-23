/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXPane : NSObject

+ (int)edActivePaneEnumFromString:(id)arg1;
+ (id)paneStateEnumMap;
+ (id)activePaneTypeEnumMap;
+ (id)edPaneFromXMLPaneElement:(struct _xmlNode *)arg1;

@end
