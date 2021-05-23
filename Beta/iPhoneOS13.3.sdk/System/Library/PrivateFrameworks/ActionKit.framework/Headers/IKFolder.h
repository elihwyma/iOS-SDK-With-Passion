/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKFolder : NSObject

{
    long long _folderID;
    NSString *_title;
    _Bool _syncToMobile;
    unsigned long long _position;
}

@property (nonatomic) long long folderID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool syncToMobile;
@property (nonatomic) unsigned long long position;

+ (id)unreadFolder;
+ (id)starredFolder;
+ (id)archiveFolder;
+ (id)folderWithFolderID:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFolderID:(long long)arg1;

@end
