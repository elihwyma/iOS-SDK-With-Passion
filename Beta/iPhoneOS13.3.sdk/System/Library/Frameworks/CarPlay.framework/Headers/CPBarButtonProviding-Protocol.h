/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/Swift-Protocol.h>

@class CPBarButton, NSArray;

@protocol CPBarButtonProviding <Swift>

@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

@end
