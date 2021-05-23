/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVFragmentedAssetMinder.h>

@class NSArray;

@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (nonatomic) double mindingInterval;
@property (nonatomic, readonly) NSArray *movies;

+ (id)fragmentedMovieMinderWithMovie:(id)arg1 mindingInterval:(double)arg2;

- (_Bool)_throwsWhenAlreadyMindedAssetIsAdded;
- (id)initWithMovie:(id)arg1 mindingInterval:(double)arg2;
- (void)addFragmentedMovie:(id)arg1;
- (void)removeFragmentedMovie:(id)arg1;

@end
