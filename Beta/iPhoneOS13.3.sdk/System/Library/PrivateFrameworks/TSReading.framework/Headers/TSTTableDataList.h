/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

@interface TSTTableDataList : TSPObject

{
    int mListType;
    unsigned int mNextID;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}

@property (nonatomic, readonly) unsigned int nextID;
@property (nonatomic, readonly) TSTIntegerKeyDict *data;

- (void)dealloc;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (id)packageLocator;
- (_Bool)supportsIDMapForType:(int)arg1;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (unsigned long long)flushableSize;
- (id)allRichTextPayloadStorages;

@end
