/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerResponse, NSIndexPath, NSString;

@interface _MPCPlayerResponseTracklistDataSource : NSObject

{
    MPCPlayerResponse *_response;
    NSIndexPath *_playingItemIndexPath;
}

@property (weak, nonatomic, readonly) MPCPlayerResponse *response;
@property (retain, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2;

@end
