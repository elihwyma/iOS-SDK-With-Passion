/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSArray, UINavigationItem;

@interface PSSpinnerRecord : NSObject

{
    _Bool _hidesBackButton;
    NSArray *_rightItems;
    NSArray *_leftItems;
    UINavigationItem *_navigationItem;
}

@property (copy, nonatomic) NSArray *rightItems;
@property (copy, nonatomic) NSArray *leftItems;
@property (retain, nonatomic) UINavigationItem *navigationItem;
@property (nonatomic) _Bool hidesBackButton;

@end
