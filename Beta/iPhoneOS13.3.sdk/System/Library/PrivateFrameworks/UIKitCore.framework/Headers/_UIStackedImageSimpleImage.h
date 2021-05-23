/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@protocol UINamedLayerContentProvider;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSimpleImage : NSObject

{
    int _blendMode;
    NSString *_name;
    double _opacity;
    UIImage *_imageObj;
    struct CGRect _frame;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) UIImage *imageObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool fixedFrame;
@property (nonatomic, readonly) id <UINamedLayerContentProvider> contentProvider;

@end
