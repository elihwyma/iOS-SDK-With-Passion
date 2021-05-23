/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class NSArray, NSString;

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter

{
    NSArray *_inputFilters;
    NSArray *_inputBackgroundFilters;
    NSString *_inputCompositionFilterName;
}

@property (retain, nonatomic) NSArray *inputFilters;
@property (retain, nonatomic) NSArray *inputBackgroundFilters;
@property (retain, nonatomic) NSString *inputCompositionFilterName;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithInputFilters:(id)arg1 inputBackgroundFilters:(id)arg2 inputCompositionFilterName:(id)arg3;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputCompositionFilterName:(id)arg1;
- (void)setSettingInputFilters:(id)arg1;
- (void)setSettingInputBackgroundFilters:(id)arg1;

@end
