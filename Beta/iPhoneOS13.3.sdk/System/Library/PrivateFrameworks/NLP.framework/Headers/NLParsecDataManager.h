/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray;

@interface NLParsecDataManager : NSObject

{
    NSMutableArray *m_entries;
}

@property (nonatomic, readonly) NSData *serializableData;

+ (_Bool)supportsDomain:(id)arg1;
+ (void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)notifyStoredSerializedDataChanged;
+ (unsigned short)maxNumberOfPOIsAllowed;

- (void)dealloc;
- (void)insertEntry:(id)arg1;
- (void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3;
- (id)getEntries;

@end
