/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSObject.h>

#import <TrialServer/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, TRIExperimentDatabase;

@interface TRIExperimentRecord : NSObject <Swift>

{
    TRIExperimentDatabase *_database;
    NSDictionary *_namespaces;
    int _type;
    struct NSString *_experimentId;
    struct NSString *_treatmentId;
    long long _status;
    double _startTimestamp;
    double _endTimestamp;
    NSString *_namespaceDescriptorDirectory;
}

@property (retain) NSString *experimentId;
@property (retain) NSString *treatmentId;
@property int type;
@property long long status;
@property double startTimestamp;
@property double endTimestamp;
@property (retain) NSString *namespaceDescriptorDirectory;
@property (readonly) NSArray *namespaces;

+ (_Bool)supportsSecureCoding;

- (_Bool)clearCache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)remove;
- (id)startTime;
- (id)endTime;
- (id)initWithDatabase:(id)arg1;
- (_Bool)updateTreatmentId:(struct NSString *)arg1;
- (void)_loadNamespaces;
- (id)namespaceWithId:(unsigned int)arg1;

@end
