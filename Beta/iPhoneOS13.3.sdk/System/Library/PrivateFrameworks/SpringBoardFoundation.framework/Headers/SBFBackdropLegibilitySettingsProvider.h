/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _UIBackdropView, _UILegibilitySettings;

@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBFBackdropLegibilitySettingsProvider : NSObject

{
    _UIBackdropView *_backdropView;
    _UILegibilitySettings *_legibilitySettings;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

- (void)dealloc;
- (void)backdropViewDidChange:(id)arg1;
- (id)initWithBackdropView:(id)arg1;

@end
