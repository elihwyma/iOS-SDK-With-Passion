/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKCaptureUnarchiverDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end
