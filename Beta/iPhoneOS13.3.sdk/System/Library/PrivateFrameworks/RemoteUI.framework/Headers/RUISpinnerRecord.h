/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UINavigationItem;

@interface RUISpinnerRecord : NSObject

{
    _Bool _hidesBackButton;
    NSArray *_rightItems;
    NSArray *_leftItems;
    UINavigationItem *_navigationItem;
    NSString *_title;
    NSString *_spinningTitle;
}

@property (copy, nonatomic) NSArray *rightItems;
@property (copy, nonatomic) NSArray *leftItems;
@property (retain, nonatomic) UINavigationItem *navigationItem;
@property (nonatomic) _Bool hidesBackButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *spinningTitle;

@end
