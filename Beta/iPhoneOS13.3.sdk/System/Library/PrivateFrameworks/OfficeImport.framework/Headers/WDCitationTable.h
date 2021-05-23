/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitationTable : NSObject

{
    NSMutableDictionary *mCitations;
    WDDocument *mDocument;
}

@property (weak, readonly) WDDocument *document;

- (id)description;
- (unsigned long long)count;
- (id)initWithDocument:(id)arg1;
- (id)citationFor:(id)arg1;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationIDs;

@end
