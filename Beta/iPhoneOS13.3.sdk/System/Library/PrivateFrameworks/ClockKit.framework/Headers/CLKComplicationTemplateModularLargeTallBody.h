/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSDate, NSDictionary;

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate

{
    _Bool _shouldTruncateHeaderLeadingLabelFirst;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_bodyTextProvider;
    CLKTextProvider *_headerTrailingTextProvider;
    NSDictionary *_additionalContentAttributes;
}

@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider;
@property (copy, nonatomic) NSDate *contentDate;
@property (nonatomic) _Bool shouldTruncateHeaderLeadingLabelFirst;
@property (copy, nonatomic) NSDictionary *additionalContentAttributes;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateDateKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
