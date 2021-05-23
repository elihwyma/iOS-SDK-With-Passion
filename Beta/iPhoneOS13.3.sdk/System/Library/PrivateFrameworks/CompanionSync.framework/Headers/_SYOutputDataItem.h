/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSData;

@interface _SYOutputDataItem : NSObject

{
    NSData *_data;
    unsigned long long _bytesSent;
    CDUnknownBlockType _callback;
}

@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned long long bytesSent;
@property (copy, nonatomic) CDUnknownBlockType callback;

@end
