/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSettings.h>

@interface PTSizeSettings : PTSettings

{
    double _width;
    double _height;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) struct CGSize sizeValue;

+ (id)settingsControllerModule;
+ (_Bool)ignoresKey:(id)arg1;

- (id)drillDownSummary;

@end
