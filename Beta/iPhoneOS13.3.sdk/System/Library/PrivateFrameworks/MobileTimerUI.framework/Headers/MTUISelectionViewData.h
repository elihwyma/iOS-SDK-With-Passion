/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTUISelectionViewData : NSObject

{
    _Bool _isSelected;
    NSString *_title;
}

@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool isSelected;

@end
