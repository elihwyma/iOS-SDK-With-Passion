/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSStyle.h>

@class NSString;

@interface TSWPCharacterStyle : TSSStyle

@property (nonatomic, readonly) NSString *presetKind;

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)emphasisProperties;
+ (id)nullStyleName;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleWithContext:(id)arg1;

- (int)writingDirection;
- (_Bool)transformsFontSizes;

@end
