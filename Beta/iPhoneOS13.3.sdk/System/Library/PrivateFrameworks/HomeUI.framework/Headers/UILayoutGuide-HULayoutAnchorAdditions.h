/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UILayoutGuide.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UILayoutGuide (HULayoutAnchorAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;

@end
