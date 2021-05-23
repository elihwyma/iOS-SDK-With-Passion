/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class UIColor, UIImage;

@protocol WBSIconResponse <Swift>

@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly, getter=isGenerated) _Bool generated;
@property (nonatomic, readonly) UIColor *extractedBackgroundColor;

@end
