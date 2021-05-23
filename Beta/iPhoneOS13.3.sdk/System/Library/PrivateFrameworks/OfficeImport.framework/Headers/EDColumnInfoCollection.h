/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfoCollection : EDSortedCollection

{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}

- (id)columnInfoForColumnNumber:(int)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;

@end
