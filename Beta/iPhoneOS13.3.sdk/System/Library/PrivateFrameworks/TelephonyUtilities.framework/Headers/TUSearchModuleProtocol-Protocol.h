/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class TUSearchController, TUSearchResults;

@protocol TUSearchModuleProtocol <Swift>

@property (readonly, getter=isSearchComplete) _Bool searchComplete;
@property (readonly) TUSearchResults *searchResults;
@property (weak) TUSearchController *searchController;

- (unsigned short)searchForString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelSearch;

@end
