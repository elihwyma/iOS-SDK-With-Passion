/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKAutocompleteAnalyticsState : NSObject

{
    NSString *_query;
    NSArray *_queryTokens;
    NSArray *_suggestionEntries;
}

@property (copy, nonatomic, readonly) NSString *query;
@property (copy, nonatomic, readonly) NSArray *queryTokens;
@property (nonatomic, readonly) NSArray *suggestionEntries;

- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;

@end
