/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UINavigationController.h>

#import <Memories/Swift-Protocol.h>

@class NSString;

@protocol MusicChangeInformable;

@interface PMMusicNavigationController : UINavigationController <Swift>

{
    id <MusicChangeInformable> _musicDidChangeDelegate;
}

@property (weak, nonatomic) id <MusicChangeInformable> musicDidChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (long long)preferredUserInterfaceStyle;

@end
