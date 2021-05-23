/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class CLKUIMmapFile, NSData, NSString;

@interface CLKUIAtlasBacking : NSObject

{
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
    NSString *_uuid;
    struct CLKUIAtlasBackingStructure _structure;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) const void *bytes;
@property (nonatomic, readonly) unsigned long long bytesLength;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long planes;
@property (nonatomic, readonly) unsigned long long planeLength;
@property (nonatomic, readonly) unsigned long long bytesPerPixel;
@property (nonatomic, readonly) unsigned long long mipCount;
@property (nonatomic, readonly) unsigned char format;
@property (nonatomic, readonly) _Bool mipmaps;
@property (nonatomic) unsigned char filter;
@property (nonatomic) unsigned char wrap;
@property (nonatomic, readonly) struct CLKUIAtlasBackingStructure structure;

+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(_Bool)arg3;
+ (id)atlasBackingWithBytes:(const void *)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 data:(id)arg3;

- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 data:(id)arg3;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 mmapFile:(id)arg3;

@end
