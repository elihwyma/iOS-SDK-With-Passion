/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFormat, BWNodeInput, BWVideoFormat, NSString;

@interface BWNodeInputMediaProperties : NSObject

{
    NSString *_associatedAttachedMediaKey;
    BWNodeInput *_owningNodeInput;
    BWFormat *_resolvedFormat;
    BWFormat *_liveFormat;
}

@property (retain, nonatomic) BWFormat *resolvedFormat;
@property (nonatomic, readonly) BWVideoFormat *resolvedVideoFormat;
@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic, readonly) BWVideoFormat *liveVideoFormat;

- (void)dealloc;
- (void)setLiveFormat:(id)arg1;
- (void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2;
- (id)liveFormatFormat;

@end
