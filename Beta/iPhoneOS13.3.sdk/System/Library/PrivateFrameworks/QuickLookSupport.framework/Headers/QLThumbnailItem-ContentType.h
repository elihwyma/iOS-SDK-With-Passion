/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <QuickLookThumbnailing/QLThumbnailItem.h>

@class NSString;

@interface QLThumbnailItem (ContentType)

@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) NSString *contentType;

@end
