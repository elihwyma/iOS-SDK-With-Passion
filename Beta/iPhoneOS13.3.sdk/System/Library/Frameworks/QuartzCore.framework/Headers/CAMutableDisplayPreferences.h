/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CADisplayPreferences.h>

@class NSString;

@interface CAMutableDisplayPreferences : CADisplayPreferences

@property (nonatomic) _Bool matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
