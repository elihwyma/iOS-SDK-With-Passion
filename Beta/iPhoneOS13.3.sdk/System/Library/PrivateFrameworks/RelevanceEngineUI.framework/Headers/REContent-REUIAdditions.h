/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngine/REContent.h>

@class CLKComplicationTemplate, CLKGaugeProvider, CLKImageProvider, CLKTextProvider;

@interface REContent (REUIAdditions)

@property (copy, nonatomic) CLKTextProvider *summaryTextProvider;
@property (copy, nonatomic) CLKImageProvider *summaryImageProvider;
@property (copy, nonatomic) CLKComplicationTemplate *circularTempate;
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;

@end
