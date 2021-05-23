/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface WFActionDrawerImage : NSObject

{
    unsigned long long _imageType;
    UIImage *_image;
}

@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly) UIImage *image;

- (id)initWithImageType:(unsigned long long)arg1 image:(id)arg2;

@end
