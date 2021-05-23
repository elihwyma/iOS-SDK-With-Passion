/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, VEKProduction, VEKSong;

@protocol PMEditProviderDelegate;

@interface PMMusicProvider : NSObject <Swift>

{
    VEKProduction *_production;
    id <PMEditProviderDelegate> _delegate;
    unsigned long long groupingStyle;
    long long _selectedSection;
    NSDictionary *_songsByMoodGroupingType;
    NSDictionary *_songsByGenreGroupingType;
    NSArray *_moodSectionKeys;
    NSArray *_genreSectionKeys;
    NSString *_currentSelectedSectionKey;
}

@property (retain, nonatomic) NSDictionary *songsByMoodGroupingType;
@property (retain, nonatomic) NSDictionary *songsByGenreGroupingType;
@property (retain, nonatomic) NSArray *moodSectionKeys;
@property (retain, nonatomic) NSArray *genreSectionKeys;
@property (retain, nonatomic) NSString *currentSelectedSectionKey;
@property (nonatomic, readonly) VEKSong *currentSong;
@property (nonatomic) unsigned long long groupingStyle;
@property (nonatomic) long long selectedSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;

- (long long)numberOfSections;
- (id)initWithProduction:(id)arg1;
- (id)indexPathOfSong:(id)arg1;
- (id)displayNameForSection:(long long)arg1;
- (long long)numberOfItemsinSection:(long long)arg1;
- (id)songAtIndex:(long long)arg1 section:(long long)arg2;
- (id)sortedMoodIDs;
- (id)songsGroupedByMood;
- (id)sortedGenreIDs;
- (id)displayNameForGenreID:(id)arg1;
- (id)displayNameForMood:(long long)arg1;
- (id)sectionKeyForIndex:(long long)arg1;
- (_Bool)genreGroupContainsSongs;

@end
