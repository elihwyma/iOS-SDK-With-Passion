/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class BLHLSPlaylistState, NSArray, NSMutableSet, NSSet, NSString;

@interface BLHLSPlaylist : NSObject

{
    _Bool _independentSegments;
    NSArray *_groups;
    NSArray *_streamInfs;
    NSArray *_segments;
    BLHLSPlaylistState *_state;
    NSMutableSet *_uniqueKeys;
    NSArray *_requestedBitrates;
}

@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *streamInfs;
@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) _Bool independentSegments;
@property (retain, nonatomic) BLHLSPlaylistState *state;
@property (retain, nonatomic) NSMutableSet *uniqueKeys;
@property (retain, nonatomic) NSArray *requestedBitrates;
@property (nonatomic, readonly) NSSet *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_rewritePlaylistWithParser:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id *)arg4;
+ (id)_playlistUsingParser:(id)arg1 error:(id *)arg2;
+ (_Bool)rewritePlaylistData:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id *)arg4;
+ (_Bool)rewritePlaylistURL:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id *)arg4;
+ (id)playlistParsingData:(id)arg1 error:(id *)arg2;
+ (id)playlistParsingURL:(id)arg1 error:(id *)arg2;

- (id)initWithRequestedBitrates:(id)arg1;
- (_Bool)_parseUsingParser:(id)arg1 error:(id *)arg2;
- (void)parser:(id)arg1 lineIsURL:(id)arg2;
- (void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4;
- (void)parser:(id)arg1 lineIsComment:(id)arg2;
- (_Bool)parserShouldCollectLine:(id)arg1;

@end
