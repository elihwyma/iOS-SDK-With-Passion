/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject

{
    SBAlertItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_anyAppIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anySUDescriptor;

@end
