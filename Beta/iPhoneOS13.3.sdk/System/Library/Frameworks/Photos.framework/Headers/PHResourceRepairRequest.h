/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHResourceAvailabilityRequest.h>

@class NSSet;

@protocol PHResourceRepairRequestDelegate;

@interface PHResourceRepairRequest : PHResourceAvailabilityRequest

{
    id <PHResourceRepairRequestDelegate> _delegate;
    NSSet *_errorCodesToRepair;
}

@property (retain, nonatomic) NSSet *errorCodesToRepair;
@property (weak, nonatomic) id <PHResourceRepairRequestDelegate> delegate;

+ (_Bool)appyCorrectionsToResource:(id)arg1 assetObjectID:(id)arg2 errorCodes:(id)arg3 context:(id)arg4;

- (void)runDaemonSide;
- (void)_handleRepairFinishedNotification:(id)arg1;
- (id)_errorCodesFromErrors:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)plistDictionary;
- (id)initWithTaskIdentifier:(id)arg1 resource:(id)arg2 assetObjectID:(id)arg3 validationErrors:(id)arg4;
- (id)initWithTaskIdentifier:(id)arg1 dataStoreKey:(id)arg2 store:(id)arg3 assetObjectID:(id)arg4 context:(id)arg5 validationErrors:(id)arg6;

@end
