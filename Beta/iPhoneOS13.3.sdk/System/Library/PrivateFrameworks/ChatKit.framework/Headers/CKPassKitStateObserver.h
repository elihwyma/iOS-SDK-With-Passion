/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKPassKitStateObserver : NSObject

{
    _Bool _passKitUIPresented;
    _Bool _iTunesStoreDialogPresented;
}

@property (nonatomic) _Bool passKitUIPresented;
@property (nonatomic) _Bool iTunesStoreDialogPresented;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)prepareForResume;
- (void)_passKitUIDismissed;
- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIPresented;

@end
