//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface SKUITracklistColumn : NSObject <NSCopying>
{
    long long _columnIdentifier;
    long long _contentAlignment;
    long long _headerAlignment;
    double _maximumWidthFraction;
    double _preferredWidth;
    BOOL _showsPreviewControl;
    BOOL _sizesToFit;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) BOOL sizesToFit; // @synthesize sizesToFit=_sizesToFit;
@property(nonatomic) BOOL showsPreviewControl; // @synthesize showsPreviewControl=_showsPreviewControl;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(nonatomic) double maximumWidthFraction; // @synthesize maximumWidthFraction=_maximumWidthFraction;
@property(nonatomic) long long headerAlignment; // @synthesize headerAlignment=_headerAlignment;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) long long columnIdentifier; // @synthesize columnIdentifier=_columnIdentifier;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)setPreferredWidthForAttributedStrings:(id)arg1;

@end

