/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ADVector : NSObject

{
    NSArray *_vector;
    NSString *_version;
}

@property (retain, nonatomic) NSArray *vector;
@property (retain, nonatomic) NSString *version;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (float)magnitude;
- (id)scalarMultiply:(float)arg1;
- (id)initWithVersion:(id)arg1 andArray:(id)arg2;
- (id)vectorAdd:(id)arg1;
- (float)dotProduct:(id)arg1;
- (id)vectorSubtract:(id)arg1;
- (id)cosineSimilarity:(id)arg1;

@end
