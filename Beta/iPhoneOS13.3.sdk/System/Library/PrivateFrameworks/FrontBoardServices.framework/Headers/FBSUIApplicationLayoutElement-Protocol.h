/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@protocol FBSUIApplicationLayoutElement <Swift>

@property (nonatomic, readonly, getter=isUIApplicationElement) _Bool UIApplicationElement;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasKeyboardFocus;

@end
