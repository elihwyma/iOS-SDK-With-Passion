/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <Foundation/NSObject.h>

#import <WallpaperKit/Swift-Protocol.h>

@class NSString;

@interface WKAbstractWallpaper : NSObject <Swift>

{
    unsigned long long _identifier;
    NSString *_name;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) NSString *name;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;

@end
