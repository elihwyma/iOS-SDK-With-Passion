/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MKLocalSearchKeypressMetrics : NSObject

{
    NSString *_query;
    NSArray *_queryTokens;
    NSArray *_suggestionEntries;
}

@property (copy, nonatomic, readonly) NSString *query;
@property (copy, nonatomic, readonly) NSArray *queryTokens;
@property (nonatomic, readonly) NSArray *suggestionEntries;

- (void)submitWithStatus:(unsigned long long)arg1;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;

@end
