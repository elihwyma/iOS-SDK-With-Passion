/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaEntity.h>

@class NSDate, NSNumber;

@interface VUIMediaCollection : VUIMediaEntity

@property (copy, nonatomic, readonly) NSDate *addedToDate;
@property (copy, nonatomic, readonly) NSNumber *mediaItemCount;
@property (copy, nonatomic, readonly) NSNumber *seasonCount;

- (id)description;

@end
