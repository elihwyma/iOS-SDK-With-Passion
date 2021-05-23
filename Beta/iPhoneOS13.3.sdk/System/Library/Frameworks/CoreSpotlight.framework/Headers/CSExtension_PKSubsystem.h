/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSExtension_PKSubsystem : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKit;

- (void)endUsing:(id)arg1;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (id)principleClassFromDictionary:(id)arg1;

@end
