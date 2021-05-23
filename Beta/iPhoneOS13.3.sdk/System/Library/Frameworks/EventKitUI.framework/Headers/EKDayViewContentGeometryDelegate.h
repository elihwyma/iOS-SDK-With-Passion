/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject

{
    EKDayViewContent *_dayViewContent;
    struct CGRect _frame;
    struct CGRect _bounds;
}

@property (weak, nonatomic) EKDayViewContent *dayViewContent;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect displayedRect;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic, readonly) double topPadding;
@property (nonatomic, readonly) double timeWidth;
@property (nonatomic, readonly) _Bool originIsUpperLeft;

- (_Bool)shouldReverseLayoutDirection;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;

@end
