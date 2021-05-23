/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKAddedToDocumentContext.h>

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext

{
    struct __CFDictionary *mTableIDMap;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)autoUpdateSmartFields;
- (struct __CFDictionary *)tableIDMap;
- (void)setTableIDMap:(struct __CFDictionary *)arg1;
- (_Bool)wasPasted;
- (_Bool)uniqueBookmarks;
- (_Bool)syncChanges;

@end
