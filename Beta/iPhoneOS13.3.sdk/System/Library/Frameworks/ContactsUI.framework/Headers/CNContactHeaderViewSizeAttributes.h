/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactHeaderViewSizeAttributes : NSObject

{
    double _photoMinHeight;
    double _photoMinTopMargin;
    double _photoMinBottomMargin;
    double _minNavbarTitleOffset;
    double _maxNavbarTitleOffset;
    double __minHeight;
    double __maxHeight;
    double _photoMaxHeight;
    double _photoMaxTopMargin;
    double _photoMaxBottomMargin;
}

@property (nonatomic) double _minHeight;
@property (nonatomic) double _maxHeight;
@property (nonatomic) double photoMinHeight;
@property (nonatomic) double photoMaxHeight;
@property (nonatomic) double photoMinTopMargin;
@property (nonatomic) double photoMaxTopMargin;
@property (nonatomic) double photoMinBottomMargin;
@property (nonatomic) double photoMaxBottomMargin;
@property (nonatomic) double minNavbarTitleOffset;
@property (nonatomic) double maxNavbarTitleOffset;

+ (id)defaultAttributes;
+ (id)displayAttributes;
+ (id)editingAttributes;
+ (id)editingAttributesWithNavBar;

- (id)init;
- (double)minHeight;
- (double)maxHeight;
- (double)valueBetweenMin:(double)arg1 max:(double)arg2 percentMax:(double)arg3;
- (double)photoHeightWithPercentMax:(double)arg1;
- (double)photoTopMarginWithPercentMax:(double)arg1;
- (double)photoBottomMarginWithPercentMax:(double)arg1;
- (double)navbarTitleOffsetWithPercentMax:(double)arg1;

@end
