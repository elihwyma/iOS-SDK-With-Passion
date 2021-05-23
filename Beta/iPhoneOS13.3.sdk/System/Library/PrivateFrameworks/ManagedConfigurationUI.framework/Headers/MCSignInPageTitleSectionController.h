/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCProfileTitlePageMetaDataSectionController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCSignInPageTitleSectionController : MCProfileTitlePageMetaDataSectionController

{
    NSString *_orgName;
}

@property (copy, nonatomic) NSString *orgName;

- (unsigned long long)numberOfRows;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)arg1;

@end
