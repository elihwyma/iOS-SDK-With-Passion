/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBWallpaperController;

@interface _SBWallpaperAssertion : NSObject <Swift>

{
    _Bool _invalidated;
    SBWallpaperController *_wallpaperController;
    long long _type;
    NSString *_reason;
}

@property (nonatomic, getter=isInvalidated) _Bool invalidated;
@property (weak, nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (readonly) long long type;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithWallpaperController:(id)arg1 type:(long long)arg2 reason:(id)arg3;

@end
