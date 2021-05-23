/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlItemCharacteristicOptions : NSObject <Swift>

{
    NSDictionary *_characteristicTypesByUsage;
}

@property (copy, nonatomic, readonly) NSSet *allCharacteristicTypes;
@property (copy, nonatomic, readonly) NSSet *allRequiredCharacteristicTypes;
@property (copy, nonatomic, readonly) NSDictionary *characteristicTypesByUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)optionsWithReadWriteCharacteristicTypes:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithCharacteristicTypesByUsage:(id)arg1;
- (id)optionsByAddingCharacteristicOptions:(id)arg1;
- (id)optionsByAddingCharacteristicTypes:(id)arg1 forUsage:(unsigned long long)arg2;
- (id)characteristicTypesForUsage:(unsigned long long)arg1;
- (id)_characteristicTypesForUsagesPassingTest:(CDUnknownBlockType)arg1;
- (id)_optionsByReducingWithOptions:(id)arg1 reducer:(CDUnknownBlockType)arg2;
- (id)optionsByIntersectingWithOptions:(id)arg1;

@end
