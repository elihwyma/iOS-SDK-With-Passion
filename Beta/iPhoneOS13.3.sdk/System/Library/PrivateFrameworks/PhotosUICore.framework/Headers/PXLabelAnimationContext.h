/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UILabel;

@interface PXLabelAnimationContext : NSObject

{
    UILabel *_label;
    struct CGRect _destinationRect;
}

@property (retain) UILabel *label;
@property struct CGRect destinationRect;

- (id)initWithLabel:(id)arg1 andDestinationRect:(struct CGRect)arg2;

@end
