/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class TKSharedResourceSlot;

@interface TKSharedResource : NSObject

{
    TKSharedResourceSlot *_slot;
}

@property (nonatomic, readonly) id object;

- (void)dealloc;
- (id)initWithSlot:(id)arg1;

@end
