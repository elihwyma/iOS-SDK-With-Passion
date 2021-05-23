/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSPurchase.h>

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase

{
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeContactIdentifier;
    NSString *_assigneeToneStyle;
    _Bool _shouldMakeDefaultRingtone;
    _Bool _shouldMakeDefaultTextTone;
}

@property (copy) NSArray *allowedToneStyles;
@property (retain) NSNumber *assigneeIdentifier;
@property (retain) NSString *assigneeContactIdentifier;
@property (copy) NSString *assigneeToneStyle;
@property _Bool shouldMakeDefaultRingtone;
@property _Bool shouldMakeDefaultTextTone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;

@end
