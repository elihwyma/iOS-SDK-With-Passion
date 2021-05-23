/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDLinkReference : NSObject

{
    unsigned long long mLinkIndex;
    unsigned long long mFirstSheetIndex;
    unsigned long long mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)firstSheetIndex;
- (unsigned long long)lastSheetIndex;
- (unsigned long long)linkIndex;
- (id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (_Bool)isEqualToLinkReference:(id)arg1;
- (void)setFirstSheetIndex:(unsigned long long)arg1;
- (void)setLastSheetIndex:(unsigned long long)arg1;
- (void)setLinkIndex:(unsigned long long)arg1;
- (_Bool)isWorkbookLevelReference;

@end
