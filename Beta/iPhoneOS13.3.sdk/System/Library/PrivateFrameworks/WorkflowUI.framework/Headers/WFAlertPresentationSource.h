/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class UIBarButtonItem, UIView;

@interface WFAlertPresentationSource : NSObject

{
    _Bool _canOverlapSourceViewRect;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    unsigned long long _permittedArrowDirections;
    struct CGRect _sourceRect;
}

@property (nonatomic, readonly) struct CGRect sourceRect;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) _Bool canOverlapSourceViewRect;

+ (id)sourceWithView:(id)arg1;
+ (id)sourceWithView:(id)arg1 rect:(struct CGRect)arg2;
+ (id)sourceWithBarButtonItem:(id)arg1;

- (id)init;
- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2 barButtonItem:(id)arg3;

@end
