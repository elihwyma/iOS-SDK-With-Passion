/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class TDTextureFace, TDTextureImageRenditionSpec, TDTextureRenditionSpec;

@interface TDTextureMipLevel : NSManagedObject

@property (nonatomic) short level;
@property (retain, nonatomic) TDTextureRenditionSpec *texture;
@property (retain, nonatomic) TDTextureImageRenditionSpec *textureImage;
@property (retain, nonatomic) TDTextureFace *face;

@end
