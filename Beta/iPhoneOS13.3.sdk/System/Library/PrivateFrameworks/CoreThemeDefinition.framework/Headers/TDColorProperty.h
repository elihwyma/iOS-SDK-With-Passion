/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDProperty.h>

@interface TDColorProperty : TDProperty

{
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

@property (nonatomic) float red;
@property (nonatomic) float green;
@property (nonatomic) float blue;
@property (nonatomic) float alpha;

- (void)dealloc;
- (void)addToDictionary:(id)arg1;

@end
