/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface GKSavedGame : NSObject

{
    NSString *_name;
    NSString *_deviceName;
    NSDate *_modificationDate;
    NSURL *_fileURL;
}

@property (retain) NSString *name;
@property (retain) NSString *deviceName;
@property (retain) NSDate *modificationDate;
@property (retain) NSURL *fileURL;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
