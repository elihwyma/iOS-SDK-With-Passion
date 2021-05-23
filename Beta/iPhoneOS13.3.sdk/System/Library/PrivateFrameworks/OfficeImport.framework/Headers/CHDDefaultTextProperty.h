/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject

{
    EDResources *mResources;
    int mDefaultTextType;
    unsigned long long mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    _Bool mShowCategoryLabel;
    _Bool mShowValueLabel;
    _Bool mShowPercentageLabel;
    _Bool mShowSeriesLabel;
    _Bool mShowBubbleSizeLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultTextPropertyWithResources:(id)arg1;

- (long long)key;
- (int)labelPosition;
- (void)setLabelPosition:(int)arg1;
- (id)initWithResources:(id)arg1;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (id)runs;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setRuns:(id)arg1;
- (void)setContentFormat:(id)arg1;
- (int)defaultTextType;
- (void)setDefaultTextType:(int)arg1;
- (_Bool)isShowCategoryLabel;
- (void)setIsShowCategoryLabel:(_Bool)arg1;
- (_Bool)isShowValueLabel;
- (void)setIsShowValueLabel:(_Bool)arg1;
- (_Bool)isShowPercentageLabel;
- (void)setIsShowPercentageLabel:(_Bool)arg1;
- (_Bool)isShowBubbleSizeLabel;
- (void)setIsShowBubbleSizeLabel:(_Bool)arg1;
- (_Bool)isShowSeriesLabel;
- (void)setIsShowSeriesLabel:(_Bool)arg1;

@end
