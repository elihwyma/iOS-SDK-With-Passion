//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect : OADBlipEffect
{
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setStyleColor:(id)arg1;
- (void)setTransferMode2:(int)arg1;
- (int)transferMode2;
- (void)setTransferMode1:(int)arg1;
- (int)transferMode1;
- (void)setColor2:(id)arg1;
- (id)color2;
- (void)setColor1:(id)arg1;
- (id)color1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

