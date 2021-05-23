/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADPDeviceDetail.h>

@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (nonatomic) _Bool inOrOverEar;
@property (copy, nonatomic) NSString *position;

+ (id)headphone;
+ (id)headphoneWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
