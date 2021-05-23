/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol NFLocking;

@interface FCMTWriterLock : NSObject

{
    id <NFLocking> _underlyingLock;
}

@property (retain, nonatomic) id <NFLocking> underlyingLock;

- (id)init;
- (void)lock;
- (void)unlock;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)initWithUnderlyingLock:(id)arg1;

@end
