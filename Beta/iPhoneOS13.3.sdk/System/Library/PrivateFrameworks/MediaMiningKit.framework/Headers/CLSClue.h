/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSInformant, CLSProfile, NSDictionary, NSString;

@interface CLSClue : NSObject

{
    _Bool _transient;
    NSString *_key;
    id _value;
    double _confidence;
    double _relevance;
    NSDictionary *_extraParameters;
    CLSInformant *_informant;
    CLSProfile *_profile;
    NSString *_informantIdentifier;
    NSString *_profileIdentifier;
    unsigned long long _versionCount;
}

@property (copy) NSString *key;
@property (retain) id value;
@property double confidence;
@property double relevance;
@property (retain) CLSInformant *informant;
@property (retain) CLSProfile *profile;
@property (retain) NSString *informantIdentifier;
@property (retain) NSString *profileIdentifier;
@property _Bool transient;
@property unsigned long long versionCount;
@property (retain) NSDictionary *extraParameters;

+ (id)_clueWithValue:(id)arg1 forKey:(id)arg2;
+ (id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;

- (double)doubleValue;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)stringValue;
- (long long)integerValue;
- (double)score;
- (unsigned long long)valueHash;
- (unsigned long long)enumValue;
- (void)_incrementVersionCount;
- (long long)compareScore:(id)arg1;
- (_Bool)isEqualToClue:(id)arg1;

@end
