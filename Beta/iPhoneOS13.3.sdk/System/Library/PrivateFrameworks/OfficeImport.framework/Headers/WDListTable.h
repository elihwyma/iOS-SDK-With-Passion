/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDDocument, WDList;

__attribute__((visibility("hidden")))
@interface WDListTable : NSObject

{
    WDDocument *mDocument;
    NSMutableArray *mLists;
    NSMutableDictionary *mListMapById;
    WDList *mNullList;
    WDList *mDefaultList;
}

- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)lists;
- (unsigned long long)listCount;
- (id)listWithListId:(int)arg1;
- (id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2;
- (id)listAt:(unsigned long long)arg1;

@end
