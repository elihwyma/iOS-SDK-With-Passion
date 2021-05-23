/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUITracklistColumn : NSObject <Swift>

{
    long long _columnIdentifier;
    long long _contentAlignment;
    long long _headerAlignment;
    double _maximumWidthFraction;
    double _preferredWidth;
    _Bool _showsPreviewControl;
    _Bool _sizesToFit;
    double _width;
}

@property (nonatomic) double width;
@property (nonatomic) long long columnIdentifier;
@property (nonatomic) _Bool showsPreviewControl;
@property (nonatomic) _Bool sizesToFit;
@property (nonatomic) long long contentAlignment;
@property (nonatomic) long long headerAlignment;
@property (nonatomic) double maximumWidthFraction;
@property (nonatomic) double preferredWidth;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPreferredWidthForAttributedStrings:(id)arg1;

@end
