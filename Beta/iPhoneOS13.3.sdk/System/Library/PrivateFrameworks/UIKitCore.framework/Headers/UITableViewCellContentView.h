/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView

{
    struct {
        unsigned int edgesForOverridingDefaultLayoutMargins:4;
    } _contentViewFlags;
    _Bool _isLayoutEngineSuspended;
    CALayer *_mask;
    struct NSDirectionalEdgeInsets _overriddenDefaultLayoutMargins;
}

@property (retain, nonatomic) CALayer *mask;
@property (nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) struct NSDirectionalEdgeInsets overriddenDefaultLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) _Bool _layoutEngineSuspended;

+ (id)classFallbacksForKeyedArchiver;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (id)_cell;
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;
- (void)_tableViewCellContentViewCommonSetup;

@end
