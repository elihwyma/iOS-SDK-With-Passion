/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString, _DPKeyProperties;

@interface _DPDataRecorder : NSObject

{
    NSObject *_randomizer;
    double _privacyParameter;
    unsigned long long _range;
    unsigned long long _fragmentWidth;
    unsigned long long _fragmentCount;
    NSString *_keyName;
    _DPKeyProperties *_keyProperties;
}

@property (copy, nonatomic, readonly) NSString *keyName;
@property (nonatomic, readonly) _DPKeyProperties *keyProperties;
@property (nonatomic, readonly) NSObject *randomizer;
@property (nonatomic, readonly) double privacyParameter;
@property (nonatomic, readonly) unsigned long long range;
@property (nonatomic, readonly) unsigned long long fragmentWidth;
@property (nonatomic, readonly) unsigned long long fragmentCount;

- (id)init;
- (id)description;
- (id)initWithKey:(id)arg1;
- (void)recordNumbers:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordWords:(id)arg1;
- (void)recordBitValues:(id)arg1;

@end
