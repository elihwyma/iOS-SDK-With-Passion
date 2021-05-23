/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString;

@interface NWMPrecipitationFormatter : NSObject

{
    NSNumberFormatter *_numberFormatter;
    NSNumberFormatter *_percentageFormatter;
}

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (nonatomic, readonly) NSString *percentSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFormatter;

- (double)value:(id)arg1;
- (id)formattedChanceOfPrecipitation:(id)arg1 style:(unsigned long long)arg2 shouldIncludePercentSymbol:(_Bool)arg3;
- (id)formattedChanceOfPrecipitation:(id)arg1 shouldIncludePercentSymbol:(_Bool)arg2;

@end
