/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGSharingSuggestionOptions : NSObject

{
    _Bool _replaceMergeCandidates;
    _Bool _debugMode;
    _Bool _includeUnverified;
    _Bool _filterLowWeightResults;
    _Bool _useContactSuggestion;
    unsigned long long _sharingStream;
    unsigned long long _fetchLimit;
}

@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) _Bool includeUnverified;
@property (nonatomic) _Bool replaceMergeCandidates;
@property (nonatomic) _Bool debugMode;
@property (nonatomic) _Bool filterLowWeightResults;
@property (nonatomic) _Bool useContactSuggestion;

+ (id)optionsForClient:(unsigned long long)arg1;
+ (unsigned long long)_shareSheetSharingStream;

- (id)init;
- (id)description;

@end
