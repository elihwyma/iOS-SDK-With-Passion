/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject <Swift>

{
    NSString *_passUniqueIdentifier;
    long long _bucket;
    double _magnitude;
}

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) long long bucket;
@property (nonatomic) double magnitude;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
