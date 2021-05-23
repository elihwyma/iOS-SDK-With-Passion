/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSSet;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject

{
    NSMutableArray *_thumbnailImages;
    NSMutableArray *_backgroundColors;
    _Bool _hasScheduledCoalescedUpdate;
    NSSet *_subrequestTokens;
}

@property (copy, nonatomic) NSSet *subrequestTokens;
@property (copy, nonatomic, readonly) NSArray *thumbnailImages;
@property (copy, nonatomic, readonly) NSArray *backgroundColors;
@property (nonatomic) _Bool hasScheduledCoalescedUpdate;

- (id)init;
- (void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2;

@end
