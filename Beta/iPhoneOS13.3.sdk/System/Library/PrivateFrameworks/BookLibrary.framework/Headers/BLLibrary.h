/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class IMLibraryPlist;

@protocol OS_dispatch_queue;

@interface BLLibrary : NSObject

{
    IMLibraryPlist *_booksPlist;
    IMLibraryPlist *_purchasedPlist;
    IMLibraryPlist *_managedPlist;
    IMLibraryPlist *_sharedPlist;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) IMLibraryPlist *booksPlist;
@property (retain, nonatomic) IMLibraryPlist *purchasedPlist;
@property (retain, nonatomic) IMLibraryPlist *managedPlist;
@property (retain, nonatomic) IMLibraryPlist *sharedPlist;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (void)initialize;
+ (id)_bookItemsFromPlist:(id)arg1 sharedPlist:(id)arg2;
+ (_Bool)_addDate:(id)arg1 toPlist:(id)arg2 bookItem:(id)arg3 error:(id *)arg4;
+ (id)defaultBookLibrary;

- (id)_init;
- (_Bool)_isMultiUser;
- (id)_initWithBooksPlist:(id)arg1 purchasedPlist:(id)arg2 managedPlist:(id)arg3 sharedPlist:(id)arg4;
- (id)_bookItemsFromPlist:(id)arg1;
- (id)_allPlists;
- (id)_list:(id)arg1 testBlock:(CDUnknownBlockType)arg2;
- (_Bool)_addSharedBookToPurchasesPlistWithPermlink:(id)arg1 error:(id *)arg2;
- (void)_downloadWithPermalink:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_bookItemFromPermlink:(id)arg1 error:(id *)arg2;
- (id)_findBookItemWithTestBlock:(CDUnknownBlockType)arg1 foundWhere:(long long *)arg2;
- (id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id *)arg3;
- (_Bool)_bookItemIsShared:(id)arg1;
- (id)allBookItems;
- (void)addITunesUBookToLibraryWithPermlink:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_lookupBookItemExhaustiveFromPermlink:(id)arg1 error:(id *)arg2;
- (_Bool)_addBookItemToEduContainer:(id)arg1 error:(id *)arg2;
- (_Bool)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_removeBookFromLibraryWithPath:(id)arg1 error:(id *)arg2;
- (id)bookIdentifierFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_isShareableBook:(id)arg1;
- (id)_perUserBookURLForBookURL:(id)arg1;
- (void)_bookWasOpenedWithStoreID:(id)arg1 permlink:(id)arg2 date:(id)arg3;

@end
