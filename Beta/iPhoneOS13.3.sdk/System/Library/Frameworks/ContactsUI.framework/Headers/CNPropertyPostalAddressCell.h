/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell

{
    _Bool _shouldUseMapTiles;
    UIImageView *_mapImageView;
    id <CNCancelable> _tileGeneratorToken;
}

@property (retain, nonatomic) UIImageView *mapImageView;
@property (retain, nonatomic) id <CNCancelable> tileGeneratorToken;
@property (nonatomic) _Bool shouldUseMapTiles;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setProperty:(id)arg1;
- (id)variableConstraints;
- (_Bool)supportsTintColorValue;
- (void)setMapImage:(id)arg1;
- (void)tapGesture:(id)arg1;

@end
