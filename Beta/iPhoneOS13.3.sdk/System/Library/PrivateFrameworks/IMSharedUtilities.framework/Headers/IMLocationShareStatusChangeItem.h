/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSString;

@interface IMLocationShareStatusChangeItem <Swift>

{
    _Bool _actionable;
    _Bool _expired;
    long long _status;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
    long long _direction;
}

@property (nonatomic) long long status;
@property (nonatomic) long long direction;
@property (nonatomic) _Bool actionable;
@property (nonatomic) _Bool expired;
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
- (_Bool)isLastMessageCandidate;

@end
