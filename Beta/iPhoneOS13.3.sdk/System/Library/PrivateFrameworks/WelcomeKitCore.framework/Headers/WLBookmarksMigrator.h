/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, WebBookmarkCollection;

@interface WLBookmarksMigrator : NSObject

{
    WebBookmarkCollection *_collection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentType;
+ (id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2;
+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2;
+ (id)_createRootBookmarkFolder;
+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2;

- (id)contentType;
- (id)dataType;
- (_Bool)accountBased;
- (void)importDataFromProvider:(CDUnknownBlockType)arg1 forSummaries:(id)arg2 summaryStart:(CDUnknownBlockType)arg3 summaryCompletion:(CDUnknownBlockType)arg4;
- (_Bool)storeRecordDataInDatabase;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)importWillBegin;
- (void)importDidEnd;

@end
