/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : NSObject

{
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (id)description;
- (id)authors;
- (id)initWithDocument:(id)arg1;
- (void)addAuthor:(id)arg1;
- (unsigned long long)authorCount;
- (id)authorAt:(unsigned long long)arg1;
- (unsigned long long)authorAddLookup:(id)arg1;

@end
