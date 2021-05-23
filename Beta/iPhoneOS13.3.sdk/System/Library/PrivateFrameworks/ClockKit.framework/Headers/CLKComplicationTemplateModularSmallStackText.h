/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallStackText : CLKComplicationTemplate

{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
    unsigned long long _highlightMode;
}

@property (nonatomic) unsigned long long highlightMode;
@property (copy, nonatomic) CLKTextProvider *line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;
@property (nonatomic) _Bool highlightLine2;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
