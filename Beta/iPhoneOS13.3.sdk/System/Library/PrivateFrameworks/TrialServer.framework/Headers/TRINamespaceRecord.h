/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSObject.h>

#import <TrialServer/Swift-Protocol.h>

@class NSString, TRIExperimentDatabase;

@interface TRINamespaceRecord : NSObject <Swift>

{
    TRIExperimentDatabase *_database;
    struct NSString *_experimentId;
    unsigned int _namespaceId;
    unsigned int _namespaceCompatibilityVersion;
    struct NSString *_treatmentId;
    NSString *_treatmentPath;
}

@property unsigned int namespaceId;
@property (retain) NSString *experimentId;
@property (retain) NSString *treatmentId;
@property (retain) NSString *treatmentPath;
@property unsigned int namespaceCompatibilityVersion;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabase:(id)arg1;

@end
