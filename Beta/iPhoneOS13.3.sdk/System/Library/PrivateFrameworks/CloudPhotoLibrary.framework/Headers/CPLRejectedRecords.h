/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject

{
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)recordWithScopedIdentifier:(id)arg1;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1;
- (void)enumerateRecordsAndReasonsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)rejectsTheSameRecordsAs:(id)arg1;
- (id)rejectedDescriptions;

@end
