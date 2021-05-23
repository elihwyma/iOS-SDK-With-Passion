/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VUIButton, VUIUpNextStateView;

@protocol VUIUpNextButtonProtocol;

__attribute__((visibility("hidden")))
@interface VUIUpNextButtonProperties : NSObject

{
    _Bool _dismissOnSelect;
    _Bool _isWatchListed;
    VUIUpNextStateView *_addedStateView;
    VUIUpNextStateView *_removedStateView;
    VUIButton<VUIUpNextButtonProtocol> *_delegate;
    NSString *_canonicalID;
}

@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) _Bool isWatchListed;
@property (nonatomic) _Bool dismissOnSelect;
@property (nonatomic, readonly) VUIUpNextStateView *addedStateView;
@property (nonatomic, readonly) VUIUpNextStateView *removedStateView;
@property (weak, nonatomic) VUIButton<VUIUpNextButtonProtocol> *delegate;

+ (id)configureWithElement:(id)arg1 existingButton:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)updateButtonContentView;
- (void)callAPIAndToggleUpNextState;
- (void)_errorInUpdatingState:(id)arg1;
- (void)_toggleUpNextState;

@end
