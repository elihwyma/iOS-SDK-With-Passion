/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDList : NSObject

{
    WDDocument *mDocument;
    int mListId;
    int mListDefinitionId;
    NSMutableArray *mLevelOverrides;
}

@property (nonatomic, readonly) int listId;
@property (nonatomic, readonly) int listDefinitionId;

- (id)description;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (unsigned long long)levelOverrideCount;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (void)removeLevelOverride:(id)arg1;
- (id)levelOverrides;
- (_Bool)isAnyListLevelOverridden;
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;
- (id)addLevelOverrideWithLevel:(unsigned char)arg1;

@end
