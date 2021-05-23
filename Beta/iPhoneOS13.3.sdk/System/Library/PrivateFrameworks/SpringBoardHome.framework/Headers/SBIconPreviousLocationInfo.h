/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBFolder;

@interface SBIconPreviousLocationInfo : NSObject

{
    SBFolder *_folder;
    NSString *_folderName;
}

@property (weak, nonatomic) SBFolder *folder;
@property (copy, nonatomic) NSString *folderName;

@end
