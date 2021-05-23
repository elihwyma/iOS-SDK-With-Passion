/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, NSURL, UIWebClip;

@interface SBBookmark : NSObject <Swift>

{
    UIWebClip *_webClip;
}

@property (nonatomic, readonly) UIWebClip *webClip;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *launchURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bookmarkWithWebClip:(id)arg1;

- (void)dealloc;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo)arg2;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (_Bool)isUninstallSupported;
- (id)initWithWebClip:(id)arg1;
- (void)_deviceUnlockedForFirstTime:(id)arg1;

@end
