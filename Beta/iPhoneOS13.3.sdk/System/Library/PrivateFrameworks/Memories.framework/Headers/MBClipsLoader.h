/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MBClipsLoader : NSObject

{
    _Bool _loading;
    _Bool _showOnlyFavorites;
    NSMutableArray *_clips;
    NSArray *_previousClips;
}

@property (retain) NSMutableArray *clips;
@property (nonatomic) _Bool showOnlyFavorites;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (retain) NSArray *previousClips;

- (void)load;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithShowOnlyFavorites:(_Bool)arg1;

@end
