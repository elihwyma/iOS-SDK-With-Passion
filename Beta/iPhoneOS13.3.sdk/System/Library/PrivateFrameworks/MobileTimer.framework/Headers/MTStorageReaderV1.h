/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSCoder;

@interface MTStorageReaderV1 : NSKeyedUnarchiver

@property (nonatomic, readonly) unsigned long long mtType;
@property (nonatomic, readonly) NSCoder *mtCoder;

@end
