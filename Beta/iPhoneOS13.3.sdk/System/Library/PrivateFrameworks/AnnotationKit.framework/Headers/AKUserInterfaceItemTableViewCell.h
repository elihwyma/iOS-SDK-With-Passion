/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView;

@interface AKUserInterfaceItemTableViewCell : UITableViewCell

{
    UIImageView *_imageView;
    double _lineWidth;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)wantsInkUpdate;

@end
