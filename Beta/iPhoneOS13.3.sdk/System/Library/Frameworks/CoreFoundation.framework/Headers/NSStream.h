/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol NSStreamDelegate;

@interface NSStream : NSObject

@property id <NSStreamDelegate> delegate;
@property (readonly) unsigned long long streamStatus;
@property (copy, readonly) NSError *streamError;

@end
