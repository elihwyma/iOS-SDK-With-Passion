/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, TVRCDevice, TVRCKeyboardAttributes;

@protocol TVRCKeyboardControllerDelegate;

@interface TVRCKeyboardController : NSObject

{
    TVRCDevice *_device;
    _Bool _editing;
    TVRCKeyboardAttributes *_attributes;
    NSString *_text;
    id <TVRCKeyboardControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <TVRCKeyboardControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;
@property (nonatomic, readonly) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

- (void)_setCurrentState:(id)arg1;
- (void)sendReturnKey;
- (id)_initWithDevice:(id)arg1;

@end
