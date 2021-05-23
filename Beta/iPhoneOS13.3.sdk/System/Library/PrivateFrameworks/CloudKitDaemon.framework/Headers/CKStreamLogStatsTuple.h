/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKStreamLogStatsTuple : NSObject

{
    NSString *_fileAndLine;
    unsigned long long _count;
    unsigned long long _size;
}

@property (retain, nonatomic) NSString *fileAndLine;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long size;

@end
