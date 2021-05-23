/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCellHeightEstimator : NSObject

{
    id <CNUINavigationListStyle> _navigationListStyle;
    NSNumber *_estimatedCellHeightNumber;
    NSNumber *_estimatedDetailCellHeightNumber;
}

@property (retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle;
@property (retain, nonatomic) NSNumber *estimatedCellHeightNumber;
@property (retain, nonatomic) NSNumber *estimatedDetailCellHeightNumber;
@property (nonatomic, readonly) double estimatedCellHeight;
@property (nonatomic, readonly) double estimatedDetailCellHeight;

- (id)initWithNavigationListStyle:(id)arg1;

@end
