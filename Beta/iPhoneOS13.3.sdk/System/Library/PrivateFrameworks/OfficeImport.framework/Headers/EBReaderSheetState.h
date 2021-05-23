/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EBReaderState, EDSheet;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject

{
    EBReaderState *mReaderState;
    EDSheet *mEDSheet;
    struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long>>> mSharedFormulas;
    unsigned long long mChartIndex;
}

- (id).cxx_construct;
- (id)resources;
- (id)workbook;
- (struct XlBinaryReader *)xlReader;
- (id)edSheet;
- (id)readerState;
- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;
- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;
- (unsigned long long)nextChartIndex;
- (id)initWithReaderState:(id)arg1;
- (void)setEDSheet:(id)arg1;
- (void)reportWorksheetWarning:(id)arg1;

@end
