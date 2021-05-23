/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCFeedViewport : NSObject

{
    NSString *_identifier;
    NSArray *_groupElements;
    NSArray *_internalElements;
    NSArray *_externalElements;
}

@property (copy, nonatomic, readonly) NSArray *internalElements;
@property (copy, nonatomic, readonly) NSArray *externalElements;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *groupElements;
@property (copy, nonatomic, readonly) NSArray *headlines;
@property (nonatomic, readonly) double ageOfTopmostGroup;

+ (id)pbViewportFromViewport:(id)arg1 prune:(_Bool)arg2 preserveBookmark:(id)arg3;
+ (id)viewportFromPBViewport:(id)arg1;
+ (id)dataFromViewport:(id)arg1 prune:(_Bool)arg2 preserveBookmark:(id)arg3;
+ (id)viewportFromData:(id)arg1;
+ (id)freshlyUnarchivedViewportFromViewport:(id)arg1;

- (id)init;
- (id)initWithArchive:(id)arg1;
- (id)bookmarkForFirstHeadline;
- (id)bookmarkForLastHeadline;
- (void)enumerateInternalHeadlinesFromBookmark:(id)arg1 toBookmark:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 internalElements:(id)arg2 externalElements:(id)arg3;
- (id)bookmarkForGroup:(id)arg1 headline:(id)arg2;
- (id)externalIndexPathForBookmark:(id)arg1;
- (id)internalIndexPathForBookmark:(id)arg1;
- (id)initWithIdentifier:(id)arg1 elements:(id)arg2;
- (id)indexPathForHeadlineReferencedByBookmark:(id)arg1 error:(id *)arg2;
- (unsigned long long)numberOfHeadlinesConcealedByGap:(id)arg1;
- (id)archiveWithPruning:(_Bool)arg1 preserveBookmark:(id)arg2;
- (id)deflatedCopy;

@end
