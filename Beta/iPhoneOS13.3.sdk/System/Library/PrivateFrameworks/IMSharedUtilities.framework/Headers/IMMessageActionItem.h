/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSString;

@interface IMMessageActionItem <Swift>

{
    long long _actionType;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
    NSString *_originalMessageGUID;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString *otherHandle;
@property (retain, nonatomic) NSString *otherUnformattedID;
@property (retain, nonatomic) NSString *otherCountryCode;
@property (retain, nonatomic) NSString *originalMessageGUID;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyDictionaryRepresentation;

@end
