/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPEquationLayoutContext : NSObject

{
    struct __CFString *_fontName;
    double _fontSize;
    double _columnWidth;
}

@property (nonatomic) double fontSize;
@property (nonatomic) double columnWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (double)containerWidth;
- (double)baseFontSize;
- (struct __CFString *)baseFontName;
- (id)initWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;

@end
