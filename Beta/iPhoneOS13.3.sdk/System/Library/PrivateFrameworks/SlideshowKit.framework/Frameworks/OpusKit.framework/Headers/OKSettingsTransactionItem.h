/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OKSettingsTransactionItem : NSObject

{
    CDUnknownBlockType _updateBlock;
    NSString *key;
    NSString *_key;
}

@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) NSString *key;

- (id)init;
- (void)dealloc;

@end
