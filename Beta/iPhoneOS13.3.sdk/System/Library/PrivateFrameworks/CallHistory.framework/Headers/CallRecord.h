/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CallRecord : NSManagedObject

@property (nonatomic, readonly) long long chHandleType;
@property (copy, nonatomic, readonly) NSSet *chRemoteParticipantHandles;
@property (nonatomic, readonly) _Bool supportsCallCategory;
@property (nonatomic, readonly) _Bool supportsHandleType;
@property (nonatomic, readonly) _Bool supportsLocalParticipantUUID;
@property (nonatomic, readonly) _Bool supportsOutgoingLocalParticipantUUID;
@property (nonatomic, readonly) _Bool supportsRemoteParticipantHandles;
@property (nonatomic, readonly) _Bool supportsServiceProvider;
@property (nonatomic, readonly) _Bool supportsVerificationStatus;
@property (retain, nonatomic) NSString *address;
@property (copy, nonatomic) NSNumber *answered;
@property (copy, nonatomic) NSNumber *call_category;
@property (copy, nonatomic) NSNumber *calltype;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *disconnected_cause;
@property (copy, nonatomic) NSNumber *filtered_out_reason;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *face_time_data;
@property (copy, nonatomic) NSNumber *handle_type;
@property (copy, nonatomic) NSString *iso_country_code;
@property (copy, nonatomic) NSUUID *localParticipantUUID;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *number_availability;
@property (copy, nonatomic) NSNumber *originated;
@property (copy, nonatomic) NSUUID *outgoingLocalParticipantUUID;
@property (copy, nonatomic) NSNumber *read;
@property (copy, nonatomic) NSString *service_provider;
@property (copy, nonatomic) NSString *unique_id;
@property (copy, nonatomic) NSNumber *verificationStatus;
@property (retain, nonatomic) NSSet *remoteParticipantHandles;

+ (id)fetchRequest;

- (id)compositeCallCategoryForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeVerificationStatusForContext:(id)arg1;

@end
