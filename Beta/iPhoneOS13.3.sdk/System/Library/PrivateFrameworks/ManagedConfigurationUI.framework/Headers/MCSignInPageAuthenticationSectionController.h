/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class AKInlineSignInViewController, MCSignInPageAuthenticationCell, NSString;

__attribute__((visibility("hidden")))
@interface MCSignInPageAuthenticationSectionController : NSObject

{
    MCSignInPageAuthenticationCell *_cell;
    AKInlineSignInViewController *_inlineSignInViewController;
    double _authSectionHeight;
}

@property (retain, nonatomic) MCSignInPageAuthenticationCell *cell;
@property (retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController;
@property (nonatomic) double authSectionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (double)heightForHeader;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (void)registerCellClassWithTableView:(id)arg1;
- (id)titleForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;

@end
