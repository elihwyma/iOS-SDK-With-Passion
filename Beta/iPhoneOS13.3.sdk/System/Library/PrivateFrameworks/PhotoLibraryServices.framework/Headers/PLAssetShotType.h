/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLAssetShotType : NSObject

{
    long long _type;
    long long _captureFlags;
    long long _procFlags;
    NSArray *_devices;
    NSString *_name;
}

@property (nonatomic) long long type;
@property (nonatomic) long long captureFlags;
@property (nonatomic) long long procFlags;
@property (retain, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *name;

+ (id)allShotTypes;

- (id)initWithType:(long long)arg1 captureFlags:(long long)arg2 procFlags:(long long)arg3 devices:(id)arg4 name:(id)arg5;

@end
