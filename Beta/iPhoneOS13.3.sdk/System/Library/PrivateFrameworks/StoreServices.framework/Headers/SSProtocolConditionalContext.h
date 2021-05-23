/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSProtocolConditionalContext : NSObject

{
    CDUnknownBlockType _itemLookupBlock;
    NSString *_platformName;
    NSString *_systemVersion;
}

@property (copy, nonatomic) CDUnknownBlockType itemLookupBlock;
@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *systemVersion;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
