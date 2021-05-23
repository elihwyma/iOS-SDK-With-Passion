/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HAPMetadataProperty : HMFObject

{
    NSString *_propertyDescription;
    NSString *_propertyType;
    NSNumber *_bitPosition;
}

@property (retain, nonatomic) NSString *propertyType;
@property (retain, nonatomic) NSNumber *bitPosition;
@property (copy) NSString *propertyDescription;

+ (id)init:(id)arg1 withDictionary:(id)arg2;

- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3;

@end
