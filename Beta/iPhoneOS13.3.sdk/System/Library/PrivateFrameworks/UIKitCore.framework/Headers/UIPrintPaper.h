/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIPrintPaper : NSObject

{
    int _paperOrientation;
    id _internal;
}

@property (readonly) struct CGSize paperSize;
@property (readonly) struct CGRect printableRect;

+ (id)_readyDocumentPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 contentSize:(struct CGSize)arg3 scaleUpForRoll:(_Bool)arg4;
+ (id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(struct CGSize)arg4;
+ (id)_defaultPaperForOutputType:(long long)arg1;
+ (id)bestPaperForPageSize:(struct CGSize)arg1 withPapersFromArray:(id)arg2;
+ (id)_defaultPaperListForOutputType:(long long)arg1;
+ (id)bestPaperForPageSize:(struct CGSize)arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3;
+ (id)_defaultPKPaperForOuptutType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_localizedName;
- (id)_pkPaper;
- (id)_localizedMediaTypeName;
- (struct CGRect)_printableRectForDuplex:(_Bool)arg1;
- (void)_updatePKPaper:(id)arg1;
- (void)_setPaperOrientation:(int)arg1;
- (id)_keywordForPDFMetadata;
- (id)_initWithPrintKitPaper:(id)arg1;
- (int)_paperOrientation;
- (struct CGRect)printRect;

@end
