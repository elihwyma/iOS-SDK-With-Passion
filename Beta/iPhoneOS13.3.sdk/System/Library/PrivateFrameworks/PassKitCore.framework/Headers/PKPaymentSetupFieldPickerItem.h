/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class DIAttributePickerItem, NSString;

@interface PKPaymentSetupFieldPickerItem : NSObject

{
    NSString *_localizedDisplayName;
    NSString *_submissionValue;
    DIAttributePickerItem *_attributePickerItem;
}

@property (copy, nonatomic, readonly) NSString *localizedDisplayName;
@property (copy, nonatomic, readonly) NSString *submissionValue;
@property (retain, nonatomic) DIAttributePickerItem *attributePickerItem;

+ (id)_itemWithDictionary:(id)arg1;
+ (id)_itemWithDIAttributePickerItem:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end
