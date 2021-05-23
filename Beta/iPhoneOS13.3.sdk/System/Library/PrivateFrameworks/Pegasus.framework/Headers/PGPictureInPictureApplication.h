/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <NSObject.h>

@class NSString;

@interface PGPictureInPictureApplication : NSObject

{
    int _processIdentifier;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithProcessIdentifier:(int)arg1;

@end
