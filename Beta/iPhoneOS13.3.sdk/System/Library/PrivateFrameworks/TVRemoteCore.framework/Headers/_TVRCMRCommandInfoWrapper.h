/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject

{
    struct _MRMediaRemoteCommandInfo *_info;
}

@property (nonatomic, readonly) unsigned int command;
@property (copy, nonatomic, readonly) NSString *commandDescription;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;

- (void)dealloc;
- (id)description;
- (id)initWithCommandInfo:(struct _MRMediaRemoteCommandInfo *)arg1;

@end
