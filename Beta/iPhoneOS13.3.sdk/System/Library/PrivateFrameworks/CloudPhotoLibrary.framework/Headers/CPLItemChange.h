/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSArray;

@interface CPLItemChange : CPLRecordChange

{
    NSArray *_containerRelations;
}

@property (copy, nonatomic) NSArray *containerRelations;

+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;

- (id)init;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)containerDescription;
- (id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id *)arg2;

@end
