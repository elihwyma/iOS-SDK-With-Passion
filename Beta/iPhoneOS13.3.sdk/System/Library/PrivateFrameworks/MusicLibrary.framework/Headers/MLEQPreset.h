/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MLEQPreset : NSObject

{
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForName:(id)arg1;
+ (id)eqPresetForBuiltInPresetType:(int)arg1;

- (id)name;
- (id)localizedName;
- (int)typeForAVController;
- (id)initWithBuiltInPresetType:(int)arg1;
- (int)builtInPresetType;

@end
