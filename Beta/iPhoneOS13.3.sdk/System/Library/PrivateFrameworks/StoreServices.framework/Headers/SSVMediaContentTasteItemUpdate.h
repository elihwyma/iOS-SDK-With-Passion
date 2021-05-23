/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSString, SSVMediaContentTasteItem;

@interface SSVMediaContentTasteItemUpdate : NSObject

{
    SSVMediaContentTasteItem *_item;
    NSDate *_updateDate;
}

@property (copy, nonatomic) SSVMediaContentTasteItem *item;
@property (copy, nonatomic) NSDate *updateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
