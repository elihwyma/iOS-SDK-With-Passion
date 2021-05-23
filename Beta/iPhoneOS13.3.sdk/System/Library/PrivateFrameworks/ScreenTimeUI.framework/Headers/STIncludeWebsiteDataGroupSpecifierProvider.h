/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_toggleIncludeWebsiteDataSpecifier;
}

@property (retain, nonatomic) PSSpecifier *toggleIncludeWebsiteDataSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setIncludeWebsiteData:(id)arg1 specifier:(id)arg2;
- (id)includeWebsiteData:(id)arg1;

@end
