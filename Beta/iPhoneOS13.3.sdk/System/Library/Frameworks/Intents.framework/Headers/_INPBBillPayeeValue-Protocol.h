/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBValueMetadata;

@protocol _INPBBillPayeeValue <Swift>

@property (copy, nonatomic) NSString *accountNumber;
@property (nonatomic, readonly) _Bool hasAccountNumber;
@property (retain, nonatomic) _INPBDataString *nickname;
@property (nonatomic, readonly) _Bool hasNickname;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
