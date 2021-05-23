/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKDetailsMapViewCell : CKDetailsCell

{
    UIView *_mapView;
}

@property (retain, nonatomic) UIView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
