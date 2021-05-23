/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModel : PUViewModel

{
    _Bool _wantsChromeVisible;
    long long _currentState;
}

@property (nonatomic) long long currentState;
@property (nonatomic, setter=setWantsChromeVisible:) _Bool wantsChromeVisible;

- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)newViewModelChange;
- (id)currentChange;
- (void)setWantsChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;

@end
