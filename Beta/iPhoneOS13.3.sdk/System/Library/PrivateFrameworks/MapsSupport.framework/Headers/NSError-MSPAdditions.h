/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (MSPAdditions)

@property (readonly) _Bool _maps_isCloudKitErrorContainingNotFoundMarkersOnly;
@property (readonly) _Bool _maps_isCloudKitTokenExpirationError;
@property (readonly) _Bool _maps_isFileNotFoundError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)MSPSyncErrorWithCode:(long long)arg1 description:(id)arg2;

- (_Bool)_maps_isCloudKitErrorWithCode:(long long)arg1 partialErrorsPolicy:(long long)arg2;
- (_Bool)_maps_isFoundationWriteError;
- (id)MSPJournalDescription;
- (_Bool)isMSPSyncErrorWithCode:(long long)arg1;

@end
