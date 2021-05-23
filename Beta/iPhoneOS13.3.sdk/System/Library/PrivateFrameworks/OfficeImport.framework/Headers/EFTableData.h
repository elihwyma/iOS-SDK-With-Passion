/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDReference, EDTable;

__attribute__((visibility("hidden")))
@interface EFTableData : NSObject

{
    struct EFRefTok mRefTok;
    EDTable *mTable;
    EDReference *mReference;
    int mMakeups;
}

- (void)dealloc;
- (id)table;
- (id)reference;
- (id)initWith:(struct EFStrTok *)arg1;
- (unsigned short *)ptgData;
- (const struct EFRefTok *)refTok;
- (void)makeup:(id)arg1 with:(int)arg2;

@end
