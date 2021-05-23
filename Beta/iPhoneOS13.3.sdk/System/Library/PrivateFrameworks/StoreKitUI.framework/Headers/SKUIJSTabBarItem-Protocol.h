/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class IKJSNavigationDocument, NSString;

@protocol SKUIJSTabBarItem <Swift>

@property (retain, nonatomic) NSString *badgeValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) NSString *rootURL;
@property (nonatomic, readonly) NSString *title;

@end
