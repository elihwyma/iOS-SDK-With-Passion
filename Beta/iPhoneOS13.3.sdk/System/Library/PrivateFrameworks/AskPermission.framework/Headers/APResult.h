/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface APResult : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_buyParams;
    NSString *_itemIdentifier;
    NSString *_productType;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *productType;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)compile;
- (id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4;

@end
