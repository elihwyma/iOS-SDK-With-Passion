/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDSearchableIndex, EFMutableInt64Set, EFSQLPropertyMapper;

@interface _MFSQLGenerationContext : NSObject

{
    EDSearchableIndex *searchableIndex;
    EFMutableInt64Set *mailboxIDs;
    unsigned int tables;
    unsigned int baseTable;
    EFSQLPropertyMapper *propertyMapper;
    _Bool usedBaseTable;
    _Bool haveLibraryIDCriterion;
    _Bool protectedDataAvailable;
}

@end
