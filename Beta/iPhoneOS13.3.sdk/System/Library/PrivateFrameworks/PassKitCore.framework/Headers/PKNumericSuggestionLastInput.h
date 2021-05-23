/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDecimalNumber, NSMutableDictionary, NSString;

@interface PKNumericSuggestionLastInput : NSObject

{
    NSString *_serialNumber;
    NSMutableDictionary *_passLastInputDictionary;
}

@property (copy, nonatomic) NSDecimalNumber *value;
@property (nonatomic) _Bool wentToMax;

- (id)init;
- (void)save;
- (id)initWithPassSerialNumber:(id)arg1;

@end
