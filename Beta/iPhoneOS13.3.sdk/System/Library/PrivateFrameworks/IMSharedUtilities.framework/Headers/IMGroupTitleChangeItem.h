/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSString;

@interface IMGroupTitleChangeItem <Swift>

{
    NSString *_title;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *otherHandle;
@property (retain, nonatomic) NSString *otherUnformattedID;
@property (retain, nonatomic) NSString *otherCountryCode;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyDictionaryRepresentation;

@end
