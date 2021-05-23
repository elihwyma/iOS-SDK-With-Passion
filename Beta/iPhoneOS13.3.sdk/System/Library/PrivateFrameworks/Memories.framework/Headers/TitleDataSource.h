/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TitleDataSource : NSObject

{
    _Bool _includeThemeTitles;
    _Bool _includeMotionTitles;
    _Bool _includeNone;
    NSArray *_themeTitleNames;
    NSArray *_genericTitleInfoItems;
    NSMutableArray *_genericTitleNames;
    NSMutableArray *_motionTitleNames;
    NSArray *_allTitleNames;
}

@property (retain, nonatomic) NSArray *genericTitleInfoItems;
@property (retain, nonatomic) NSArray *themeTitleNames;
@property (retain, nonatomic) NSMutableArray *genericTitleNames;
@property (retain, nonatomic) NSMutableArray *motionTitleNames;
@property (retain, nonatomic) NSArray *allTitleNames;
@property (nonatomic) _Bool includeThemeTitles;
@property (nonatomic) _Bool includeMotionTitles;
@property (nonatomic) _Bool includeNone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDataSource;

- (id)init;
- (void)dealloc;
- (long long)numberOfItems;
- (id)itemNameAtIndexPath:(id)arg1;
- (id)indexPathOfItemName:(id)arg1;
- (id)titleTypesForTitleDefinition:(id)arg1;
- (id)itemNames;
- (id)titleStylesIncludingTheme:(_Bool)arg1 includingMotion:(_Bool)arg2;
- (unsigned long long)numberOfTitles;
- (id)indexPathOfTitleName:(id)arg1;
- (id)titleNameAtIndex:(unsigned long long)arg1;
- (id)representativeTitleNameForTitleDefinition:(id)arg1;
- (id)micaFileNameForTitleIdentifier:(id)arg1 micaFileBaseName:(id)arg2;

@end
