/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSClue.h>

@interface CLSMeaningClue : CLSClue

{
    id _relatedData;
}

@property (retain) id relatedData;

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;

- (id)init;
- (_Bool)isEqualToClue:(id)arg1;

@end
