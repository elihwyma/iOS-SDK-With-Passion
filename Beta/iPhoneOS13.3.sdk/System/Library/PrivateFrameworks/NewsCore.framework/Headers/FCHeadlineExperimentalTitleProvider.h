/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject

{
    _Bool _shouldShowAlternateHeadlines;
    NSString *_feldsparID;
}

@property (copy, nonatomic, readonly) NSString *feldsparID;
@property (nonatomic) _Bool shouldShowAlternateHeadlines;

+ (_Bool)isDebugModeEnabled;

- (id)initWithShouldShowAlternateHeadlines:(_Bool)arg1;
- (id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)metadataForDefaultHeadlineWithTitle:(id)arg1;

@end
