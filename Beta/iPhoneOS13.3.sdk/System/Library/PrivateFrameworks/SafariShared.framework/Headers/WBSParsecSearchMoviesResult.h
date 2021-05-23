/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult

{
    NSMutableArray *_posterRepresentations;
    NSString *_descriptionLeadInText;
}

@property (nonatomic, readonly) NSString *descriptionLeadInText;

- (id)initWithDictionary:(id)arg1;
- (id)postersWithSession:(id)arg1;

@end
