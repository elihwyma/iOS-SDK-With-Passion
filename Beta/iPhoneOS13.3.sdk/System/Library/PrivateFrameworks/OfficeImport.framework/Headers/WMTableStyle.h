/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WMStyle.h>

@class WDTableProperties;

__attribute__((visibility("hidden")))
@interface WMTableStyle : WMStyle

{
    WDTableProperties *mWdTableProperties;
}

- (id)initWithWDTableProperties:(id)arg1;
- (void)addTableProperties:(id)arg1;

@end
