/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSSet, NSString;

@interface HAPMetadataService : HMFObject

{
    _Bool _allowAssociatedService;
    NSString *_name;
    NSString *_svcDescription;
    NSString *_uuidStr;
    NSString *_btleuuidStr;
    NSNumber *_properties;
    NSArray *_linkedServices;
    NSSet *_mandatoryCharacteristics;
    NSSet *_optionalCharacteristics;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *svcDescription;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *btleuuidStr;
@property (retain, nonatomic) NSNumber *properties;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSSet *mandatoryCharacteristics;
@property (retain, nonatomic) NSSet *optionalCharacteristics;
@property (nonatomic) _Bool allowAssociatedService;

- (id)description;
- (void)dump;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 mandatoryChrTypes:(id)arg4 properties:(id)arg5 linkedServices:(id)arg6;
- (id)generateDictionary:(id)arg1 metadata:(id)arg2;

@end
