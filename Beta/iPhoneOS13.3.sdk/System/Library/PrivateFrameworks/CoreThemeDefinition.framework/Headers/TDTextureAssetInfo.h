/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface TDTextureAssetInfo : NSObject

{
    _Bool _flipped;
    NSURL *_fileURL;
    unsigned long long _mipLevel;
    long long _textureFace;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSURL *mipsURL;
@property (nonatomic) unsigned long long mipLevel;
@property (nonatomic) long long textureFace;
@property (nonatomic) _Bool flipped;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
