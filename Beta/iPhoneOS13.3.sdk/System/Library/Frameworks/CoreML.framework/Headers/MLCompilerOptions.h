/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSString;

@interface MLCompilerOptions : NSObject

{
    _Bool _dryRun;
    NSString *_platform;
    NSString *_platformVersion;
}

@property _Bool dryRun;
@property (retain) NSString *platform;
@property (retain) NSString *platformVersion;

+ (id)defaultOptions;

- (id)init;

@end
