/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface OKMediaCluster : NSObject

{
    NSString *_title;
    NSMutableArray *_items;
    _Bool _isUnknown;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic, readonly) NSMutableArray *items;
@property (nonatomic) _Bool isUnknown;

- (id)init;
- (void)dealloc;
- (id)uniqueURLs;

@end
