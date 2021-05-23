/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface TKRepository : NSObject

{
    NSString *_bundlePath;
    NSURL *_URL;
    NSString *_version;
}

@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSURL *URL;

+ (void)reset;
+ (id)bundlePathForURL:(id)arg1;
+ (void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)viewPathForName:(id)arg1;
- (id)initWithURL:(id)arg1 bundlePath:(id)arg2;

@end
