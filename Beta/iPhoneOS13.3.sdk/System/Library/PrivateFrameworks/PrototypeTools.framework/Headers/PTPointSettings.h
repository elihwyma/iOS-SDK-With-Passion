/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSettings.h>

@interface PTPointSettings : PTSettings

{
    double _x;
    double _y;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) struct CGPoint pointValue;

+ (id)settingsControllerModule;
+ (_Bool)ignoresKey:(id)arg1;

- (id)drillDownSummary;

@end
