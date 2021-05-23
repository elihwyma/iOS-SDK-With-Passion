/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView

{
    double _currentProgress;
    UIImageView *_appleLogo;
    unsigned long long _style;
    unsigned long long _version;
}

@property (retain, nonatomic) UIImageView *appleLogo;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long version;
@property (nonatomic) double currentProgress;

- (struct CGSize)_size;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)_tickLength;
- (id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2;

@end
