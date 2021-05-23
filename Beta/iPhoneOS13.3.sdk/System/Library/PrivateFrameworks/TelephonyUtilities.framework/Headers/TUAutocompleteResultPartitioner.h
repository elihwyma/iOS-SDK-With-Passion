/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TUSearchController;

__attribute__((visibility("hidden")))
@interface TUAutocompleteResultPartitioner : NSObject

{
    TUSearchController *_searchController;
    NSMutableArray *_normalResultsArray;
    NSMutableArray *_foundInMailResultsArray;
    NSMutableArray *_foundOnServersResultsArray;
}

@property (retain, nonatomic) NSMutableArray *normalResultsArray;
@property (retain, nonatomic) NSMutableArray *foundInMailResultsArray;
@property (retain, nonatomic) NSMutableArray *foundOnServersResultsArray;
@property (weak) TUSearchController *searchController;

+ (_Bool)sourceTypeIsFoundInMail:(unsigned long long)arg1;
+ (_Bool)sourceTypeIsFoundOnServers:(unsigned long long)arg1;

- (id)init;
- (id)searchResults;
- (void)addResult:(id)arg1;

@end
