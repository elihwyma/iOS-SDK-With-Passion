/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKStructuredLocation, UITableViewCell;

@interface EKUILocationAndCellPair : NSObject

{
    EKStructuredLocation *_location;
    UITableViewCell *_cell;
}

@property (retain) EKStructuredLocation *location;
@property (retain) UITableViewCell *cell;

@end
