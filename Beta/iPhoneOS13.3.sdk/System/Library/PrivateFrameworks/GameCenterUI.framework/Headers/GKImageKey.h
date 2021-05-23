/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKImageKey : NSObject

{
    NSString *_filePath;
    NSString *_cacheKey;
    NSString *_basename;
    NSString *_imageID;
    struct CGSize _size;
}

@property (retain, nonatomic) NSString *imageID;
@property (retain, nonatomic) NSString *basename;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic) struct CGSize size;

+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;

@end
