/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBHyperlink : NSObject

+ (int)edTypeFromXlHyperlinkType:(int)arg1;
+ (id)edHyperlinkFromXlHLink:(struct XlHLink *)arg1 edResources:(id)arg2;
+ (void)addToolTip:(struct XlHLinkToolTip *)arg1 toEdHyperLink:(id)arg2 edResources:(id)arg3;
+ (int)xlTypeFromEDHyperlinkType:(int)arg1;

@end
