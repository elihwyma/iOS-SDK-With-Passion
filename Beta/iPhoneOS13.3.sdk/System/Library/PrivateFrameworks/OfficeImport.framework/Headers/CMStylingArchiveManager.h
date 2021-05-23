/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStylingArchiveManager : CMArchiveManager

{
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
}

- (id)init;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)cssStylesheetString;
- (id)commitStylesheet;

@end
