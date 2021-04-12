//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSCH3DPrefilteredLineSetting : NSObject
{
    BOOL mDisableColorOutput;
    BOOL mCullBackfaces;
    BOOL mUseNormals;
    tvec4_ac57c72d mFilterRadius;
    float mLineWidth;
    tvec4_ac57c72d mStrokeColor;
    TSDStroke *mStroke;
}

+ (id)setting;
@property(copy, nonatomic) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property(nonatomic) tvec4_ac57c72d strokeColor; // @synthesize strokeColor=mStrokeColor;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=mLineWidth;
@property(nonatomic) tvec4_ac57c72d filterRadius; // @synthesize filterRadius=mFilterRadius;
@property(nonatomic) BOOL cullBackfaces; // @synthesize cullBackfaces=mCullBackfaces;
@property(nonatomic) BOOL disableColorOutput; // @synthesize disableColorOutput=mDisableColorOutput;
@property(nonatomic) BOOL useNormals; // @synthesize useNormals=mUseNormals;
- (id).cxx_construct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

