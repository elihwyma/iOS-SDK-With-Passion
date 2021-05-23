/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface HMHAPMetadata : NSObject

{
    NSNumber *_version;
    NSDictionary *_hapChrMap;
    NSDictionary *_hapSvcMap;
    NSDictionary *_hapCategoryMap;
}

@property (retain, nonatomic) NSDictionary *hapChrMap;
@property (retain, nonatomic) NSDictionary *hapSvcMap;
@property (retain, nonatomic) NSDictionary *hapCategoryMap;
@property (retain, nonatomic) NSNumber *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getSharedInstance;

- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (id)characteristicTypeDescription:(id)arg1;
- (id)categoryForNumber:(id)arg1;
- (_Bool)applyProtoBufData:(id)arg1 callbackOperations:(id)arg2;
- (id)categoryForCategoryType:(id)arg1;
- (id)serviceTypeDescription:(id)arg1;

@end
