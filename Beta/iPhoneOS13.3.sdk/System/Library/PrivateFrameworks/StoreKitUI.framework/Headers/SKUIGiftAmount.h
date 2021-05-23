/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmount : NSObject <Swift>

{
    NSString *_displayLabel;
    NSString *_partNumber;
    NSNumber *_value;
}

@property (copy, nonatomic) NSString *displayLabel;
@property (copy, nonatomic) NSString *partNumber;
@property (copy, nonatomic) NSNumber *value;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)HTTPBodyDictionary;
- (id)initWithAmountDictionary:(id)arg1;

@end
