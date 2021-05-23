/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@class TSDCommentStorage;

@interface TSTTableDataCommentStorage : TSTTableDataObject

{
    TSDCommentStorage *mCommentStorage;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithCommentStorage:(id)arg1;

@end
