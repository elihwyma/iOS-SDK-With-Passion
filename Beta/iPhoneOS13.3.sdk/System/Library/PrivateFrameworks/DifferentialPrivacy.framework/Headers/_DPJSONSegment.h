/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _DPJSONSegment : NSObject

{
    NSString *_key;
    NSString *_serverAlgorithmString;
    NSArray *_records;
    NSDictionary *_parameterDictionary;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSString *serverAlgorithmString;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;

- (id)init;
- (id)jsonSegmentString;
- (id)parameterStringFrom:(id)arg1;
- (id)initWithKey:(id)arg1 serverAlgorithmString:(id)arg2 parameterDictionary:(id)arg3 records:(id)arg4;

@end
