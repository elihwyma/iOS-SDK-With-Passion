/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface NTKComplicationSampleData : NSObject

{
    NSMutableDictionary *_familyToTemplate;
    NSMutableSet *_supportedFamilies;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_clientID;
    NSString *_applicationID;
}

@property (copy) NSString *clientID;
@property (copy) NSString *applicationID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)supportedFamilies;
- (id)initWithSupportedFamilies:(id)arg1;
- (id)templateForFamily:(long long)arg1;
- (void)setTemplate:(id)arg1 forFamily:(long long)arg2;
- (id)loadedFamilies;

@end
