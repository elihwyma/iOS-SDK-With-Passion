/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject

{
    NSDictionary *_dictionary;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (nonatomic, readonly) NSSet *featureNames;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)featureValueForName:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2;
- (id)initWithFeatureProvider:(id)arg1;
- (id)initWithFeatureValueDictionary:(id)arg1;

@end
