/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TLSystemApplication : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_name;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *name;

+ (id)defaultSystemApplication;

- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2;

@end
