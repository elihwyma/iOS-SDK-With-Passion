/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CSVMapper : CMMapper

{
    NSMutableArray *mRows;
    NSString *mFileName;
    unsigned long long mColumnCount;
    struct CGSize mPageSize;
}

- (struct CGSize)pageSize;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4;

@end
