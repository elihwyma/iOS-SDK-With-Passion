//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIPattern : NSObject
{
    CGImage _patternImage;
    CGPattern _pattern;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (CGImage )patternImageRef;
- (id)description;
- (void)setPatternInContext:(CGContext )arg1;
- (CGPattern )pattern;
- (CGPattern )_newPattern;
- (void)dealloc;
- (id)initWithImageRef:(CGImage )arg1;

@end

