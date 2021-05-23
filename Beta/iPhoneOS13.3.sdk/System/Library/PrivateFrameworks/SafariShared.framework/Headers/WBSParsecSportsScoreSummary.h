/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel

{
    NSArray *_images;
    NSString *_subtitle;
    NSArray *_scores;
}

@property (copy, nonatomic, readonly) NSArray *images;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSArray *scores;

+ (id)schema;

- (id)initWithDictionary:(id)arg1;

@end
