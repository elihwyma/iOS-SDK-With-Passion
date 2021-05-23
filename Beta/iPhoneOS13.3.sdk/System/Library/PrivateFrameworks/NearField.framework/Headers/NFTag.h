/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@protocol NFTagA, NFTagB, NFTagF;

@interface NFTag : NSObject

{
    unsigned int _type;
    unsigned int _technology;
    NSData *_tagID;
    NSData *_pmm;
    NSArray *_allSystemCodes;
    NSData *_appData;
    NSData *_uid;
    NSString *_description;
    unsigned int _ndefAvailability;
    unsigned long long _ndefMessageSize;
    unsigned long long _ndefContainerSize;
    NSData *_atqa;
    NSData *_sak;
    NSData *_historicalBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) unsigned int technology;
@property (copy, nonatomic, readonly) NSData *tagID;
@property (copy, nonatomic, readonly) NSData *UID;
@property (nonatomic, readonly) unsigned int ndefAvailability;
@property (nonatomic, readonly) unsigned long long ndefMessageSize;
@property (nonatomic, readonly) unsigned long long ndefContainerSize;
@property (copy, nonatomic, readonly) NSData *AppData;
@property (nonatomic, readonly) id <NFTagA> tagA;
@property (nonatomic, readonly) id <NFTagB> tagB;
@property (nonatomic, readonly) id <NFTagF> tagF;
@property (copy, nonatomic, readonly) NSData *atqa;
@property (copy, nonatomic, readonly) NSData *sak;
@property (copy, nonatomic, readonly) NSData *historicalBytes;
@property (copy, nonatomic, readonly) NSData *selectedAID;
@property (copy, nonatomic, readonly) NSData *pupi;
@property (copy, nonatomic, readonly) NSData *applicationData;
@property (nonatomic, readonly) _Bool applicationDataCoding;
@property (copy, nonatomic, readonly) NSData *IDm;
@property (copy, nonatomic, readonly) NSData *PMm;
@property (copy, nonatomic, readonly) NSData *SystemCode;
@property (copy, nonatomic, readonly) NSArray *allSystemCodes;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFTag:(id)arg1;
- (_Bool)isEqualToNFTag:(id)arg1;

@end
