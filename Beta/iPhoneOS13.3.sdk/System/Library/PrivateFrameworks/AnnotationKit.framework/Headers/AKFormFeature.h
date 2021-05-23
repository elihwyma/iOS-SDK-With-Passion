/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKPageController;

@interface AKFormFeature : NSObject

{
    AKPageController *_page;
    struct CGRect _rect;
}

@property (nonatomic) struct CGRect rect;
@property (weak, nonatomic) AKPageController *page;

+ (id)featureWithRect:(struct CGRect)arg1 onPage:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;

@end
