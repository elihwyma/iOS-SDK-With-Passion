/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFPrimaryStateCharacteristicActionSuggestionVendor : NSObject

{
    NSString *_characteristicType;
    id _normalStateValue;
    unsigned long long _bucketingPolicy;
}

@property (nonatomic, readonly) id normalStateValue;
@property (nonatomic, readonly) unsigned long long bucketingPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *characteristicType;

- (id)initWithCharacteristicType:(id)arg1 normalStateValue:(id)arg2;
- (id)initWithCharacteristicType:(id)arg1 normalStateValue:(id)arg2 bucketingPolicy:(unsigned long long)arg3;
- (id)_bucketingValueForAction:(id)arg1;
- (id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2;

@end
