/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <Swift>

{
    NSString *_name;
    unsigned long long _creatorIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _totalBytesNeededOnDisk;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long creatorIdentifier;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) unsigned long long totalBytesNeededOnDisk;
@property (nonatomic, readonly) Class clientPromiseClass;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
