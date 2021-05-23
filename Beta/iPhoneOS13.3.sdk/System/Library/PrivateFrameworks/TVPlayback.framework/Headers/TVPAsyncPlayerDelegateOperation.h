/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TVPAsyncPlayerDelegateOperation : NSObject

{
    NSNumber *_identifier;
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) NSNumber *identifier;
@property (copy, nonatomic) CDUnknownBlockType block;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
