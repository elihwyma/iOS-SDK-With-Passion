/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUBrowsingOneUpVisibilityHelper : NSObject

{
    _Bool _isOneUpVisible;
    _Bool _isPresentedForSecondScreen;
    PUBrowsingViewModel *_browsingViewModel;
}

@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) _Bool isOneUpVisible;
@property (nonatomic, readonly) _Bool isPresentedForSecondScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_performOnDemandReframingIfNeeded:(id)arg1;
+ (_Bool)_shouldPerformOnDemandReframing:(id)arg1 isOneUpVisible:(_Bool)arg2 isPresentedForSecondScreen:(_Bool)arg3;

- (void)dealloc;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)initWithBrowsingViewModel:(id)arg1 isPresentedForSecondScreen:(_Bool)arg2;

@end
