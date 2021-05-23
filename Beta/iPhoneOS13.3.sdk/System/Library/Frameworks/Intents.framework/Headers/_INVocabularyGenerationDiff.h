/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString;

@interface _INVocabularyGenerationDiff : NSObject

{
    _Bool _isFullReset;
    NSSet *_deletedSiriIDs;
    NSArray *_updatedVocabularyItems;
    long long _countOfVocabularyItemsAfterApplying;
    NSString *_intentSlotName;
    NSString *_appBundleID;
}

@property (copy, nonatomic) NSSet *deletedSiriIDs;
@property (copy, nonatomic) NSArray *updatedVocabularyItems;
@property (nonatomic) long long countOfVocabularyItemsAfterApplying;
@property (nonatomic) _Bool isFullReset;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *appBundleID;

- (id)description;
- (_Bool)hasChanges;

@end
