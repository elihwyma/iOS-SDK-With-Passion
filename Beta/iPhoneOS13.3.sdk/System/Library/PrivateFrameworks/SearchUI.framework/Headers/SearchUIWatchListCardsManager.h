/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, SearchUIWatchListUtilities, WLKCanonicalPlayablesResponse;

@interface SearchUIWatchListCardsManager : NSObject

{
    _Bool _isInUpNext;
    NSHashTable *_rowModels;
    NSString *_watchListIdentifier;
    WLKCanonicalPlayablesResponse *_response;
    SearchUIWatchListUtilities *_watchListUtility;
}

@property (retain, nonatomic) NSHashTable *rowModels;
@property (retain, nonatomic) NSString *watchListIdentifier;
@property (retain, nonatomic) WLKCanonicalPlayablesResponse *response;
@property (retain, nonatomic) SearchUIWatchListUtilities *watchListUtility;
@property (nonatomic) _Bool isInUpNext;

+ (_Bool)isUpNextCardSection:(id)arg1;

- (id)initWithWatchListIdentifier:(id)arg1;
- (_Bool)isTappable;
- (id)currentUpNextTextForRowModel:(id)arg1;
- (long long)currentUpNextButtonState;
- (void)addWatchListRowModelObserver:(id)arg1;
- (void)toggleUpNextWithDelegate:(id)arg1;

@end
