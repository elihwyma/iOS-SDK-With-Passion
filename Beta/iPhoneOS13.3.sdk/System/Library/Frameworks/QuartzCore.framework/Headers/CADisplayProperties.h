/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject

{
    CADisplayMode *_currentMode;
    NSString *_overscanAdjustment;
    unsigned int _connectionSeed;
}

@property (retain, nonatomic) CADisplayMode *currentMode;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (nonatomic) unsigned int connectionSeed;

- (void)dealloc;

@end
