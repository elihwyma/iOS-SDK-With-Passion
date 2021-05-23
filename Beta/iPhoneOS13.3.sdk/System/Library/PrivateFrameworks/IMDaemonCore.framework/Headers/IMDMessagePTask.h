/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMDMessagePTask : NSObject

{
    NSString *_guid;
    unsigned long long _taskFlags;
}

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) unsigned long long taskFlags;

- (void)dealloc;
- (_Bool)needsProccesingFor:(unsigned long long)arg1;
- (void)compeletedTask:(unsigned long long)arg1;
- (id)initWithGUID:(id)arg1;
- (void)setTaskFlag:(unsigned long long)arg1;
- (id)initWithStoreDictionary:(id)arg1;

@end
