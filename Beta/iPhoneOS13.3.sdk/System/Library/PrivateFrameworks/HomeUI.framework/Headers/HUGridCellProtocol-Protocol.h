/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HUGridCellLayoutOptions;

@protocol HUGridCellProtocol <Swift>

@property (nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden;
@property (retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isRearranging) _Bool rearranging;

+ (unsigned short)layoutOptionsClass;

@end
