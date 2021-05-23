/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSURL.h>

@interface NSURL (Pasteboard)

@property (nonatomic, readonly, getter=_pb_isDirectory) _Bool _pb_directory;
@property (nonatomic, readonly, getter=_pb_isFileProvider) _Bool _pb_isFileProvider;

@end
