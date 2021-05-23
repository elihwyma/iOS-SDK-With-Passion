/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject

{
    WDDocument *mDocument;
    NSMutableArray *mListDefinitions;
    NSMutableDictionary *mListDefinitionMapById;
    NSMutableDictionary *mListDefinitionMapByStyleId;
    WDListDefinition *mNullListDefinition;
    WDListDefinition *mDefaultListDefinition;
}

- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)definitions;
- (id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2;
- (id)resolvedDefinitionWithDefinitionId:(int)arg1;
- (id)definitionWithDefinitionId:(int)arg1;
- (id)definitionWithStyleId:(id)arg1;

@end
