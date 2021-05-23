/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@protocol WBSDictionaryKeyValueStore;

@interface WBSForYouDataSourceWeightManager : NSObject

{
    id <WBSDictionaryKeyValueStore> _store;
}

- (void)clear;
- (double)weightForSource:(unsigned long long)arg1;
- (id)initWithKeyValueStore:(id)arg1;
- (void)downvoteSource:(unsigned long long)arg1;

@end
