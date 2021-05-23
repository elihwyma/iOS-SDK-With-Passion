/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFormatRequirements, NSString;

@interface BWNodeInputMediaConfiguration : NSObject

{
    NSString *_associatedAttachedMediaKey;
    BWFormatRequirements *_formatRequirements;
    int _passthroughMode;
    int _retainedBufferCount;
    int _delayedBufferCount;
    int _indefinitelyHeldBufferCount;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) int passthroughMode;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int delayedBufferCount;
@property (nonatomic) int indefinitelyHeldBufferCount;

- (id)init;
- (void)dealloc;
- (void)_setAssociatedAttachedMediaKey:(id)arg1;

@end
