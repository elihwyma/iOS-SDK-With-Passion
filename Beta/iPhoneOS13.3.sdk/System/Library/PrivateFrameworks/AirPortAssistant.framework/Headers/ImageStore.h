/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@interface ImageStore : NSObject

+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 ofType:(id)arg3;
+ (id)imageForInformationalDiagram:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 audioImage:(_Bool)arg4 small:(_Bool)arg5;
+ (id)imageNameForInformationalDiagram:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 audioImage:(_Bool)arg4 small:(_Bool)arg5 useDataCache:(_Bool *)arg6;
+ (id)insetImageForInformationalDiagram:(unsigned int)arg1 deviceKind:(int)arg2 audioImage:(_Bool)arg3 small:(_Bool)arg4;
+ (id)imageNameForProductID:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 small:(_Bool)arg4 cropped:(_Bool)arg5 threeDee:(_Bool)arg6;
+ (id)kitImageOfType:(long long)arg1;
+ (id)sharedImageStore;
+ (id)imageForInformationalDiagram:(unsigned int)arg1;
+ (double)informationDiagramBaseImageCenterOffset:(unsigned int)arg1 small:(_Bool)arg2;
+ (double)informationDiagramBaseImageRightEdgeInset:(unsigned int)arg1 small:(_Bool)arg2;
+ (id)imageForInformationalDiagramNamed:(id)arg1 small:(_Bool)arg2;
+ (id)insetImageForInformationalDiagram:(unsigned int)arg1;
+ (id)imageForBaseStationWithProductID:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 small:(_Bool)arg4 cropped:(_Bool)arg5 threeDee:(_Bool)arg6;
+ (struct CGImage *)cgImageFromImage:(id)arg1 forContentsScale:(double)arg2;

@end
