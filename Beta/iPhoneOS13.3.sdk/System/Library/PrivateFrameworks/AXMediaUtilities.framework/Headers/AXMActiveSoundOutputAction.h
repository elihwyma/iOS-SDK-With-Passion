/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSoundOutputAction.h>

@class AXMActiveSoundOutputActionHandle;

@interface AXMActiveSoundOutputAction : AXMSoundOutputAction

@property (nonatomic, readonly) AXMActiveSoundOutputActionHandle *handle;

- (id)initWithURL:(id)arg1;
- (id)initWithSoundID:(id)arg1;

@end
