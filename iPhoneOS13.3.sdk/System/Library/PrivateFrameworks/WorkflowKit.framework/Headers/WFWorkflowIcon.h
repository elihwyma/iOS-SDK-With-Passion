//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, WFColor;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _glyphCharacter;
    long long _backgroundColorValue;
    NSData *_customImageData;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned short)defaultGlyphCharacter;
+ (long long)randomBackgroundColor;
@property(readonly, copy, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) unsigned short glyphCharacter; // @synthesize glyphCharacter=_glyphCharacter;
@property(readonly, nonatomic) long long backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) WFColor *backgroundColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;
- (id)init;

@end

