/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject

{
    NSString *_characteristicType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *characteristicType;

- (id)initWithCharacteristicType:(id)arg1;
- (id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2;

@end
