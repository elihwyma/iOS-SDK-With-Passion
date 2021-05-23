/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackText : CLKComplicationTemplateGraphicCircular

{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
    unsigned long long _highlightMode;
}

@property (nonatomic) unsigned long long highlightMode;
@property (copy, nonatomic) CLKTextProvider *line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)setHighlightLine2:(_Bool)arg1;
- (_Bool)highlightLine2;

@end
