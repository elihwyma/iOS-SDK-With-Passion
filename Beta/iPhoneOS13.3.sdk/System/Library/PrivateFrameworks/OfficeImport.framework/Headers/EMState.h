/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMState.h>

@class EDSheet, EDWorkbook, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMState : CMState

{
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
    NSMutableDictionary *_hyperlinks;
}

@property (retain) EDWorkbook *document;
@property (weak) EDSheet *currentSheet;

- (id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;

@end
