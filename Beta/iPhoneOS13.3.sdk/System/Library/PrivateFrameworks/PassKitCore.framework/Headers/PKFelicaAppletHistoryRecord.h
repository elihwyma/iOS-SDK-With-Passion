/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKTransitAppletHistoryRecord.h>

@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord

{
    NSNumber *_transactionType;
    NSNumber *_sectorCombination;
    NSNumber *_amountType;
    NSString *_transactionID;
}

@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSNumber *transactionType;
@property (copy, nonatomic) NSNumber *sectorCombination;
@property (copy, nonatomic) NSNumber *amountType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
