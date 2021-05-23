/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UltravioletIndexModel : NSObject

{
    double _fraction;
    NSString *_localizedIndex;
    UIColor *_tintColor;
}

@property (nonatomic, readonly) double fraction;
@property (nonatomic, readonly) NSString *localizedIndex;
@property (nonatomic, readonly) UIColor *tintColor;

+ (id)ultravioletIndexModelForConditions:(id)arg1 indexNumberFormatter:(id)arg2 useRoundedVariant:(_Bool)arg3;

@end
