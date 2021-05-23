/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class AVAssetExportSession;

@interface MFPhotoPickerProgressItem : NSObject

{
    int _imageRequestID;
    double _progress;
    AVAssetExportSession *_exportSession;
}

@property (nonatomic) double progress;
@property (nonatomic) int imageRequestID;
@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (id)description;

@end
