/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface ICFolderCustomNoteSortType : NSObject

{
    unsigned long long _order;
    unsigned long long _direction;
}

@property (nonatomic) unsigned long long order;
@property (nonatomic) unsigned long long direction;
@property (nonatomic, readonly) NSNumber *valueRepresentation;
@property (nonatomic, readonly) _Bool isDefault;
@property (nonatomic, readonly) NSString *summaryViewTitleDescription;

+ (id)folderNoteSortTypeWithOrder:(unsigned long long)arg1 direction:(unsigned long long)arg2;
+ (unsigned long long)customOrderForGlobalSortType:(long long)arg1;
+ (id)noteSortTypeDefaultAscending;
+ (id)currentDefaultMenuItemString;
+ (id)folderNoteSortTypeFromValue:(id)arg1;
+ (unsigned long long)sortTypeOrderForTag:(unsigned long long)arg1;
+ (unsigned long long)sortTypeDirectionForTag:(unsigned long long)arg1;
+ (_Bool)isTagAnOrder:(long long)arg1;
+ (_Bool)isTagADirection:(long long)arg1;
+ (id)sortTypeOrderValues;
+ (id)actionItemTitleForOrder:(unsigned long long)arg1;
+ (id)segmentItemTitleForOrder:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isAscending;
- (id)debugStringNameForOrder:(unsigned long long)arg1;
- (id)stringNameForDirection:(unsigned long long)arg1 order:(unsigned long long)arg2;
- (id)folderNoteSortTypeByChangingOrder:(unsigned long long)arg1;
- (id)folderNoteSortTypeByChangingDirection;
- (id)currentActionItemTitle;

@end
