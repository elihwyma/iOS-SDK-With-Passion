/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SKFrameCaptureDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;

@end
