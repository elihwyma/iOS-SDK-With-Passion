/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXColumnLayout, SXComponentTextStyle;

@interface SXTextResizer : NSObject

{
    _Bool _fontScalingEnabled;
    SXColumnLayout *_columnLayout;
    SXComponentTextStyle *_defaultTextStyle;
}

@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) SXComponentTextStyle *defaultTextStyle;
@property (nonatomic, readonly) _Bool fontScalingEnabled;

- (id)initWithColumnLayout:(id)arg1 defaultTextStyle:(id)arg2 fontScalingEnabled:(_Bool)arg3;
- (long long)resizeTextSize:(long long)arg1 fontResizingThreshold:(double)arg2 fontSizeConstant:(double)arg3 contentSizeCategory:(id)arg4 fontTextStyle:(id)arg5;
- (double)normalizedFontSizeForSize:(double)arg1;
- (unsigned long long)resizeDropCapNumberOfLines:(long long)arg1;

@end
