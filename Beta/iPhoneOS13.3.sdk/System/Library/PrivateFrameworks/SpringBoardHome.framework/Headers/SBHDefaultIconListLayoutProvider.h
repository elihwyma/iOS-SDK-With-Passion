/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBHDefaultIconListLayoutProvider : NSObject

{
    NSMutableDictionary *_cachedListLayouts;
    unsigned long long _screenType;
    unsigned long long _layoutOptions;
}

@property (nonatomic, readonly) unsigned long long screenType;
@property (nonatomic, readonly) unsigned long long layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)currentDeviceScreenType;
+ (id)frameworkFallbackInstance;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)layoutForIconLocation:(id)arg1;
- (id)initWithScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2;
- (void)configureFloatyFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureLabelConfigurations:(id)arg1 forScreenType:(unsigned long long)arg2;
- (void)configureIconAccessoryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureFolderIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureClockIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureSidebarConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2;
- (id)makeLayoutForIconLocation:(id)arg1;
- (id)initWithScreenType:(unsigned long long)arg1;
- (id)initWithLayoutOptions:(unsigned long long)arg1;

@end
