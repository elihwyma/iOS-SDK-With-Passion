/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKFTSEntry : NSObject

{
    NSString *_path;
    struct stat _stat;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) struct stat stat;

- (id)initWithFTSEntry:(struct _ftsent *)arg1 error:(id *)arg2;
- (id)errorForFTSEntry:(struct _ftsent *)arg1;

@end
