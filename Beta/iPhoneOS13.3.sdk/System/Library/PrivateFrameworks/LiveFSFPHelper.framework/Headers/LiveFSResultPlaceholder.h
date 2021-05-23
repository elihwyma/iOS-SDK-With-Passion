/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface LiveFSResultPlaceholder : NSObject

{
    NSString *_path;
    NSString *_filename;
    NSNumber *_modTime;
    NSDictionary *_xattrs;
}

@property (retain) NSString *path;
@property (retain) NSString *filename;
@property (retain) NSNumber *modTime;
@property (retain) NSDictionary *xattrs;

@end
