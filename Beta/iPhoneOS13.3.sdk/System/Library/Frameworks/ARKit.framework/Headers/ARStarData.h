/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString, SRHMEConfig;

@interface ARStarData : NSObject <Swift>

{
    long long _mode;
    double _timestamp;
    SRHMEConfig *_config;
}

@property (nonatomic) long long mode;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) SRHMEConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;

@end
