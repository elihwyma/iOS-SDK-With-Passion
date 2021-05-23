/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXTextSource.h>

@class SXFormattedText;

@interface SXDataTableTextSource : SXTextSource

{
    SXFormattedText *_formattedText;
    unsigned long long _defaultTextAlignment;
    CDStruct_2fea82da _indexPath;
}

@property (nonatomic, readonly) SXFormattedText *formattedText;
@property (nonatomic, readonly) CDStruct_2fea82da indexPath;
@property (nonatomic) unsigned long long defaultTextAlignment;

- (void)applyStylingOnTextTangierStorage:(id)arg1;
- (id)initWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 smartFieldFactory:(id)arg3 dataSource:(id)arg4 documentLangaugeProvider:(id)arg5 fontAttributesConstructor:(id)arg6;

@end
