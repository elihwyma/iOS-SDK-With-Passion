/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIArchiveItem : NSObject

{
    _Bool _fileSizeIsSet;
    _Bool _isAppleDoubleFile;
    NSString *_pathInArchive;
    NSString *_fileType;
    unsigned long long _fileSize;
    NSString *_pathToAppleDoubleRealFileCounterpart;
}

@property (retain, nonatomic) NSString *pathInArchive;
@property (retain, nonatomic) NSString *fileType;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) _Bool fileSizeIsSet;
@property (nonatomic) _Bool isAppleDoubleFile;
@property (retain, nonatomic) NSString *pathToAppleDoubleRealFileCounterpart;

- (id)description;

@end
