/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SUCoreMAIdentifier : NSObject

{
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_releaseType;
    NSData *_measurement;
    NSString *_measurementAlgorithm;
}

@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *releaseType;
@property (retain, nonatomic) NSData *measurement;
@property (retain, nonatomic) NSString *measurementAlgorithm;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductVersion:(id)arg1 productBuildVersion:(id)arg2 releaseType:(id)arg3 measurement:(id)arg4 measurementAlgorithm:(id)arg5;

@end
