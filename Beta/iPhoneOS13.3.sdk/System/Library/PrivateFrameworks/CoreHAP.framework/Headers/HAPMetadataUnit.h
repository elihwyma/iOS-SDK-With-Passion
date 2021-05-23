/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject

{
    NSString *_name;
    NSString *_unitDescription;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *unitDescription;

+ (id)init:(id)arg1 withDictionary:(id)arg2;

- (id)description;
- (void)dump;
- (id)initWithName:(id)arg1 description:(id)arg2;
- (id)generateDictionary;

@end
