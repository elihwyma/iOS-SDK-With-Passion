/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSString, NSURL;

@interface AXMSoundOutputAction : AXMOutputAction

{
    NSString *_soundID;
    NSURL *_soundFileURL;
}

@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) NSString *soundID;

+ (id)_soundFileURLForSoundID:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)initWithSoundID:(id)arg1;
- (id)_initWithURL:(id)arg1 handle:(id)arg2;
- (id)_initWithSoundID:(id)arg1 handle:(id)arg2;

@end
