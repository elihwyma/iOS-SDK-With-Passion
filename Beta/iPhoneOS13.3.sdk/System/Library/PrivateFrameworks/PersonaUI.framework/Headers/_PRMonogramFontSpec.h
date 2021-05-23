/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PRMonogramFontSpec : NSObject

{
    NSString *_fontName;
    double _baseSize;
    double _tracking;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double baseSize;
@property (nonatomic, readonly) double tracking;

+ (id)specForFontWithName:(id)arg1 baseSize:(double)arg2 tracking:(double)arg3;

@end
