/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@interface NUImageExportFormat : NSObject <Swift>

+ (id)defaultFormatForURL:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;

@end
