/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCFSEvent : NSObject

{
    NSString *_path;
    unsigned int _flags;
    unsigned long long _eventID;
}

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) unsigned long long eventID;

- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 eventID:(unsigned long long)arg3;

@end
