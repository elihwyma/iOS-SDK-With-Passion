/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HUSoftwareLibraryLookupResult : NSObject

{
    NSSet *_matchedLibraryItems;
    NSSet *_matchedStoreItems;
    NSSet *_unmatchedRequests;
}

@property (retain, nonatomic) NSSet *matchedLibraryItems;
@property (retain, nonatomic) NSSet *matchedStoreItems;
@property (retain, nonatomic) NSSet *unmatchedRequests;

+ (id)resultForRequests:(id)arg1;
+ (id)resultForAccessories:(id)arg1;
+ (id)_libraryResultForRequests:(id)arg1;
+ (id)_storeResultForRequests:(id)arg1;

- (id)init;

@end
