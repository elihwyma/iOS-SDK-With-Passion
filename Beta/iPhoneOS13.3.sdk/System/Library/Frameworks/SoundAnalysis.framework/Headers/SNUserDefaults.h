/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface SNUserDefaults : NSObject

{
    NSUserDefaults *_userDefaults;
}

@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)userDefaults;
+ (id)instance;
+ (id)allDefaultsInfo;

- (id)init;

@end
