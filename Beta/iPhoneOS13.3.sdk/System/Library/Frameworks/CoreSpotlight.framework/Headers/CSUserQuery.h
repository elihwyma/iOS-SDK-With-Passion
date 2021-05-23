/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchQuery.h>

@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery

{
    NSArray *_filterQueries;
    NSArray *_bundleIDs;
}

@property (copy) NSArray *filterQueries;
@property (readonly) NSString *keyboardLanguage;
@property (copy) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *bundleIDs;
@property (readonly, getter=isCancelled) _Bool cancelled;
@property (readonly) unsigned long long foundItemCount;

- (void)cancel;
- (void)start;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3;

@end
