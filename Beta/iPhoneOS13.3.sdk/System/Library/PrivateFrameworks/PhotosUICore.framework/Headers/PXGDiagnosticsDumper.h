/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface PXGDiagnosticsDumper : NSObject

{
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *url;

- (id)initWithDumpURL:(id)arg1;
- (id)dumpContentsForAllGridViews;
- (id)dumpContentsForGridView:(id)arg1;
- (struct CGImage *)newImageFromMTLTexture:(id)arg1;

@end
