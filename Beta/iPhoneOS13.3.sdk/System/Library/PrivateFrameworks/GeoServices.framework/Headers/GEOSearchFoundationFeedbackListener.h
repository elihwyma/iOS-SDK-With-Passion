/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface GEOSearchFoundationFeedbackListener : NSObject

{
    int _uiTarget;
    NSArray *_sections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)feedbackListenerForParsec;

- (id)init;
- (id)traits;
- (id)initWithClientType:(unsigned long long)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didEngageSection:(id)arg1;

@end
