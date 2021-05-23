/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject

{
    SBAlertItem *_item;
    NSArray *_recipesToTest;
}

@property (retain, nonatomic) NSArray *recipesToTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (id)testCases;
+ (id)testCasesGrouped;
+ (id)nameForCase:(long long)arg1;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)alertForIndex:(long long)arg1;
- (id)_mapsApp;
- (id)_anyAppIcon;
- (id)dataPlanAlertItemForCase:(long long)arg1;
- (id)_anyUserInstalledAppIcon;
- (id)_anySUDescriptor;

@end
